unsigned char Position_Y;   // value with range [11, 47]
unsigned char Position_Y_old = 0;
unsigned long ADCdata;      // 12-bit 0 to 4095 sample
unsigned long Flag;         // refresh screen if flag is set

unsigned long Systick_Counter = 0x0;

// Initialize SysTick to produce 50Hz interrupt
void SysTick_Init(void){
  NVIC_ST_CTRL_R = 0;                   // disable SysTick during setup
  NVIC_ST_RELOAD_R = 1600000 - 1;           // 80MHz/50Hz - 1
  NVIC_ST_CURRENT_R = 0;                // any write to current clears it
	NVIC_SYS_PRI3_R = (NVIC_SYS_PRI3_R&0x00FFFFFF)|(0x1<<29); // priority 1
  NVIC_ST_CTRL_R = 0x00000007;          // enable with core clock and interrupts
}

// Busy-wait Analog to digital conversion
// Returns 12-bit result of ADC conversion
unsigned long ADC0_In(void){
  unsigned long result;
	
  ADC0_PSSI_R = 0x0008;            // 1) initiate SS3
  while((ADC0_RIS_R&0x08)==0){};   // 2) wait for conversion done
  result = ADC0_SSFIFO3_R&0xFFF;   // 3) read result
  ADC0_ISC_R = 0x0008;             // 4) acknowledge completion
		
  return result;
}

// Convert a 12-bit binary ADC sample into a number
// raging from 19 (height of the spaceship 10 + header 9) to 42 (48 - footer 6).
// The number represents where should the ship be drawn.
unsigned char Convert(unsigned long sample){
  return (unsigned char)(sample/178 + 19);
}

// **************DAC_Out*********************
// output to DAC
// Input: 4-bit data, 0 to 15 
// Output: none
void DAC_Out(unsigned long data){
  GPIO_PORTB_DATA_R = data;
}

unsigned long Index = 0;    // index into array
const unsigned char *Wave;  // pointer to array
unsigned long SoundCounter = 0;    // number of points (0 means no sound)
unsigned long temp = 0;    // number of points (0 means no sound)

 unsigned long Random5(void){
  return ((Random()>>24)%5)+1;  // returns 1, 2, 3, 4, or 5
}

void Timer2A_Stop(void){ 
  TIMER2_CTL_R &= ~0x00000001; // disable
}
void Timer2A_Start(void){ 
  TIMER2_CTL_R |= 0x00000001;   // enable
}

void Sound_Play(const unsigned char *pt, unsigned long count){
  Wave = pt;
  Index = 0;
  SoundCounter = count;
  Timer2A_Start();
}

unsigned long TimerCount;       // counts number of Timer2 interrupts
unsigned long Semaphore;        // set when Timer2 interrupt occurs

// Timer2 initialization
void Timer2_Init(unsigned long period){ 
  unsigned long volatile delay;
	
  SYSCTL_RCGCTIMER_R |= 0x04;   // 0) activate timer2
  delay = SYSCTL_RCGCTIMER_R;
  TimerCount = 0;
  Semaphore = 0;
  TIMER2_CTL_R = 0x00000000;    // 1) disable timer2A during setup
  TIMER2_CFG_R = 0x00000000;    // 2) configure for 32-bit mode
  TIMER2_TAMR_R = 0x00000002;   // 3) configure for periodic mode, default down-count settings
  TIMER2_TAILR_R = period-1;    // 4) reload value
  TIMER2_TAPR_R = 0;            // 5) bus clock resolution
  TIMER2_ICR_R = 0x00000001;    // 6) clear timer2A timeout flag
  TIMER2_IMR_R = 0x00000001;    // 7) arm timeout interrupt
  NVIC_PRI5_R = (NVIC_PRI5_R&0x00FFFFFF); // 8) priority 0
// interrupts enabled in the main program after all devices initialized
// vector number 39, interrupt number 23
  NVIC_EN0_R = 1<<23;           // 9) enable IRQ 23 in NVIC
  TIMER2_CTL_R = 0x00000001;    // 10) enable timer2A
}

// Interrupt service routine
// Executed every 12.5ns*(period)
void Timer2A_Handler(void){ 
  TIMER2_ICR_R = 0x00000001;   // acknowledge timer2A timeout
	
  if(SoundCounter){
    DAC_Out(Wave[Index]); 
    Index = Index + 1;
    SoundCounter = SoundCounter - 1;
  }
	else {
    Timer2A_Stop();
  }
}

unsigned long Fire_Button_Pressed(void) {
	return (GPIO_PORTE_DATA_R & 0x01);
}

// one can shoot every 50 systicks
unsigned long Special_Button_Pressed(void) {
	return (GPIO_PORTE_DATA_R & 0x02);
}

unsigned long FrameCount=0;
unsigned char systick_counter = 0x00;
unsigned char field_counter = 0x00;

// Called at 50Hz
void SysTick_Handler(void){
	int i = 0;
	
	// clear whole screen buffer
	Nokia5110_ClearBuffer();
	
	// repeat 0-15
	FrameCount = (FrameCount+1)&0x0F;
	
	
	// FIELD OPERATIONS
	// every 6 systicks move the fields
	if (systick_counter % 6 == 0) {
		field_counter = (field_counter + 1)%12;
	}
	// update and draw 7 fields
	for(i=0;i<7;i++){
		Nokia5110_PrintBMP(i*12, 47, _my_Field_ptr[(i+field_counter)%12], 0);
	}
	
	// SHIP OPERATIONS
	ADCdata = ADC0_In();
	Ship.y = Convert(ADCdata);
	
	Nokia5110_PrintBMP(Ship.x, Ship.y, Ship.image[FrameCount/8], 0);
	
	// ENEMIES OPERATIONS
	for(i=0;i<3;i++){
		if(Enemy[i].life > 0){
			// draw enemy
			Nokia5110_PrintBMP(Enemy[i].x, Enemy[i].y, Enemy[i].image[FrameCount/8], 0);
			
			// operation if missile is still alive
			if (Enemy[i].Missile.life) {
				Enemy[i].Missile.x -= 1;
		
				// check if the rocket is outside of the screen
				if (Enemy[i].Missile.x <= 0)
					Enemy[i].Missile.life = 0;
				// check if the rocket hit the ship
				else if (
					(Enemy[i].Missile.x <= 15) && 
					((Enemy[i].Missile.y > Ship.y - Ship.height) || 
					(Enemy[i].Missile.y - Enemy[i].Missile.height < Ship.y))) {
					// play fire sound
					Sound_Play(invaderkilled, invaderkilled_Count);
					// decrease ship's life
					Ship.life--;
					// missile is dead now
					Enemy[i].Missile.life = 0x0;
				}
				else
					Nokia5110_PrintBMP(Enemy[i].Missile.x, Enemy[i].Missile.y, Enemy[i].Missile.image[FrameCount/8], 0);
			}
			else if (Enemy[i].Missile.firePermission)
				Enemy[i].Missile.firePermission--;
			else {
				// randomize to launch a rocket from enemy
				temp = ((Random()>>(5+i))%6)+1;
				if (temp == 3) {
					Enemy[i].Missile.x = 56;
					Enemy[i].Missile.life = 1;
					Enemy[i].Missile.firePermission = 80;
					// play fire sound
					Sound_Play(fastinvader4, fastinvader4_Count);
				}
			}
    }
  }
	
	
	// FIRE BUTTON OPERATIONS
	// operation if missile is still alive
	if (Ship.Missile.life) {
		Ship.Missile.x += 2;
		
		// check if the rocket is outside of the screen
		if ((Ship.Missile.x + Ship.Missile.width) > SCREENW)
			Ship.Missile.life = 0;
		else
			Nokia5110_PrintBMP(Ship.Missile.x, Ship.Missile.y, Ship.Missile.image[FrameCount/8], 0);
	}
	
	if (Ship.Missile.firePermission)
		Ship.Missile.firePermission--;
	
	// it is presumed that the rocket will be dead in less time than
	// firePermission is set again
	if ((Fire_Button_Pressed()) & (Ship.Missile.firePermission == 0)) {
		// play fire sound
		Sound_Play(sound_Shoot, sound_Shoot_Count);
		
		// missile is now "alive"
		Ship.Missile.life = 1;
		Ship.Missile.x = 16;
		Ship.Missile.y = Ship.y - Ship.height/2 + Ship.Missile.height/2;
		// draw rocket
		Nokia5110_PrintBMP(Ship.Missile.x, Ship.Missile.y, Ship.Missile.image[FrameCount/8], 0);
		
		// one can fire every 50 ticks (1 sec)
		Ship.Missile.firePermission = 50;
	}
	
	
	// OTHER OPS
	// print horizontal separator line
	Nokia5110_PrintBMP(0, 8, _my_above_line, 0);
	
	// print remaining hearts
	for(i=0; i<Ship.life; i++){
		Nokia5110_PrintBMP(1 + i*9, 6, _my_heart, 0);
	}
	// toggle red LED if only one heart is left
	if ((Ship.life == 1) & (systick_counter % 6 == 0))
		GPIO_PORTB_DATA_R ^= 0x20;
	
	// print collected coins
	for(i=0; i < Ship.special_weapon_status; i++){
		Nokia5110_PrintBMP(76 - i*7, 6, _my_coin_01, 0);
	}
	// print empty coins
	for(i=0; i < 5 - Ship.special_weapon_status; i++){
		Nokia5110_PrintBMP(76 - 4*7 + i*7, 6, _my_coin_00, 0);
	}
	// toggle green LED if special weapon is ready
	if ((Ship.special_weapon_status == 5) & (systick_counter % 6 == 0))
		GPIO_PORTB_DATA_R ^= 0x10;
		
	Flag = 1;
	systick_counter++;
}

// initialization of all pins
void Ports_Init(void){
	volatile unsigned long delay;
	
	// initialization of buttons on PE1 and PE0
	SYSCTL_RCGC2_R |= 0x00000010;     // activate clock for Port E
  delay = SYSCTL_RCGC2_R;           // allow time for clock to start
  GPIO_PORTE_AMSEL_R &= ~0x03;      // disable analog on PE1 and PE0
  GPIO_PORTE_PCTL_R &= ~0x000000FF; // PCTL GPIO on PE1 and PE0
  GPIO_PORTE_DIR_R &= ~0x03;        // PE1 and PE0 are inputs
  GPIO_PORTE_AFSEL_R &= ~0x03;      // disable alt funct on PE1 and PE0
	GPIO_PORTE_PUR_R &= ~0x03;        // disable pull-up on PE0 and PE1
  GPIO_PORTE_DEN_R |= 0x03;         // enable digital I/O on PE1 and PE0
	
	// initialization of AIN1 on PE2
  GPIO_PORTE_DIR_R &= ~0x04;        // make PE2 input
  GPIO_PORTE_AFSEL_R |= 0x04;       // enable alternate function on PE2
  GPIO_PORTE_DEN_R &= ~0x04;        // disable digital I/O on PE2
  GPIO_PORTE_AMSEL_R |= 0x04;       // enable analog function on PE2
	
  SYSCTL_RCGC0_R |= 0x00010000;     // activate ADC0
  delay = SYSCTL_RCGC2_R;
  SYSCTL_RCGC0_R &= ~0x00000300;    // configure for max 125K samples/second
  ADC0_SSPRI_R = 0x0123;            // Sequencer 3 is highest priority
	
  ADC0_ACTSS_R &= ~0x0008;          // disable sample sequencer 3
  ADC0_EMUX_R &= ~0xF000;           // seq3 is software trigger
  ADC0_SSMUX3_R &= ~0x000F;         // clear SS3 field
  ADC0_SSMUX3_R += 1;               // set channel Ain1 (PE2)
  ADC0_SSCTL3_R = 0x0006;           // no TS0 D0, yes IE0 END0
  ADC0_ACTSS_R |= 0x0008;           // enable sample sequencer 3
	
	// initialization of LEDs on PB5 and PB4
	// and 4-bit DAC (PB3-0)
	SYSCTL_RCGC2_R |= 0x00000002;     // activate clock for Port B
  delay = SYSCTL_RCGC2_R;           // allow time for clock to start
  GPIO_PORTB_AMSEL_R &= ~0x3F;      // disable analog on PB5-0
  GPIO_PORTB_PCTL_R &= ~0x00FFFFFF; // PCTL GPIO on PB5 and PB4
  GPIO_PORTB_DIR_R |= 0x3F;         // PB5-0 are outputs
  GPIO_PORTB_AFSEL_R &= ~0x3F;      // disable alt funct on PB5-0
	GPIO_PORTB_PUR_R &= ~0x3F;        // disable pull-up on PB5-0
  GPIO_PORTB_DEN_R |= 0x3F;         // enable digital I/O on PB5-0
	GPIO_PORTB_DR8R_R |= 0x0F;        // PB3-0 can drive up to 8mA out
}

void Delay100ms(unsigned long count){
	unsigned long volatile time;
  
	while(count>0){
    time = 727240;  // 0.1sec at 80 MHz
    while(time){
	  	time--;
    }
    count--;
  }
}
