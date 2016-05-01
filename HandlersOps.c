// ************************************
// Global const values
// ************************************
// Y position of the header separator line
const unsigned char HeaderSeparatorYPos = 8;
// game Y ranges
const unsigned char GameMinY = HeaderSeparatorYPos + 1;
const unsigned char GameMaxY = (SCREENH - 1) - _myField_Height;
// Systick priority
const unsigned char SystickPriority = 1;

// Ship's start life
const unsigned char MaxShipsLife = 3;
// Enemy's start life
const unsigned char MaxEnemyLife = 5;
// number of tokens that need to be collected
const unsigned char MaxTokens = 3;
// number of enemies
const unsigned long NumberOfEnemies = 8;

// define main ship
GeneralSprite Ship;
// define enemies
GeneralSprite Enemy[NumberOfEnemies];
// define the token
GeneralSprite Token;

// number of systick that have to pass so the enemy can move forward
const unsigned char systickNumForEnemyMoveX = 20;


// ************************************
// Global variables
// ************************************
// 12-bit 0 to 4095 sample.
unsigned long ADCdata;
// refresh screen if this flag is set;
// it is set every systick
unsigned long Flag;
// counter that increases by 1 every systick
unsigned long SystickCounter = 0x0;
// counter used for field rendering in footer of the screen
unsigned char FieldCounter = 0x0;

// index necessary for navigating through sound data
unsigned long Index = 0;
// pointer to sound data
const unsigned char *Wave;
// number of values in sound
unsigned long SoundCounter = 0;

// number of explosions;
// these numbers have to be divisible
const unsigned char SpecialNumOfExpl = 40;
const unsigned char SpecialExplosionsAtOnce = 5;
const unsigned char SpecialExplRefreshRate = 25;
// special weapon countdown
unsigned long SpecialWeaponIgnitedTimer = 0;
// special weapon positions arrays
const unsigned char * SpecialImagePointers[SpecialExplosionsAtOnce];
unsigned char SpecialPositionsX[SpecialExplosionsAtOnce];
unsigned char SpecialPositionsY[SpecialExplosionsAtOnce];


// temp vars used for various stuff
signed long temp01 = 0;
signed long temp02 = 0;

// Initialize SysTick to produce 50Hz interrupt
void SysTick_Init(void){
  NVIC_ST_CTRL_R = 0;                   // disable SysTick during setup
  NVIC_ST_RELOAD_R = 1600000 - 1;           // 80MHz/50Hz - 1
  NVIC_ST_CURRENT_R = 0;                // any write to current clears it
	NVIC_SYS_PRI3_R = (NVIC_SYS_PRI3_R&0x00FFFFFF)|(SystickPriority<<29); // priority 1
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
// raging from 19 (header + height of the spaceship) to 44 (footer 4).
// The number represents where should the ship be drawn.
unsigned char Convert(unsigned long sample){
  return (unsigned char)(sample/(4095/(GameMaxY-GameMinY+1-Ship.height+1)) + GameMinY+Ship.height-1);
}

// output to DAC constituted from PB3-0
// Input: 4-bit data
void DAC_Out(unsigned long data){
	// change only PB3-0
  GPIO_PORTB_DATA_R = ((GPIO_PORTB_DATA_R & 0xFFFFFFF0) | (data & 0xF));
}

// Stop Timer2A
void Timer2A_Stop(void){ 
  TIMER2_CTL_R &= ~0x00000001; // disable
}
// Start Timer2A
void Timer2A_Start(void){ 
  TIMER2_CTL_R |= 0x00000001;   // enable
}

// Play a sound through Timer2A
void Sound_Play(const unsigned char *pt, unsigned long count){
  Wave = pt;
  Index = 0;
  SoundCounter = count;
  Timer2A_Start();
}

// Timer2 initialization
void Timer2_Init(unsigned long period){ 
  unsigned long volatile delay;
	
  SYSCTL_RCGCTIMER_R |= 0x04;   // 0) activate timer2
  delay = SYSCTL_RCGCTIMER_R;
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

// Timer2A interrupt service routine
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

// initialite sprites and their const data
void InitSprites(unsigned long enemiesNum){
	int i;
	
	// main ship initialization
	Ship.image[0] = _my_PlayerShip2_00;
	Ship.image[1] = _my_PlayerShip2_01;
	Ship.width  = _my_PlayerShip2_00[18];
	Ship.height = _my_PlayerShip2_00[22];
	Ship.Missile.image[0] = _my_Thin_Missile_01;
	Ship.Missile.image[1] = _my_Thin_Missile_01;
	Ship.Missile.width  = _my_Thin_Missile_01[18];
	Ship.Missile.height = _my_Thin_Missile_01[22];
	
	// enemies initialization
	for(i=0; i<enemiesNum; i++){
    Enemy[i].image[0] = _my_Enemy01_01;
    Enemy[i].image[1] = _my_Enemy01_02;
		Enemy[i].width  = _my_Enemy01_01[18];
		Enemy[i].height = _my_Enemy01_01[22];
		Enemy[i].Missile.image[0] = _my_Thin_Missile_01;
		Enemy[i].Missile.image[1] = _my_Thin_Missile_01;
		Enemy[i].Missile.width  = _my_Thin_Missile_01[18];
		Enemy[i].Missile.height = _my_Thin_Missile_01[22];
	}
	
	// token initialization
	Token.image[0] = _my_coin_00;
	Token.image[1] = _my_coin_01;
	Token.width  = _my_coin_00[18];
	Token.height = _my_coin_00[22];
}

// check if buttons are pressed
unsigned long Fire_Button_Pressed(void) {
	return (GPIO_PORTE_DATA_R & 0x01);
}
unsigned long Special_Button_Pressed(void) {
	return (GPIO_PORTE_DATA_R & 0x02);
}

// random function for drawable X position. Input is width of the sprite that wants to be drawn.
unsigned char Random_Drawable_X_Pos(unsigned char width) {
	return ((Random() % SCREENW));
}
// random function for drawable Y position. Input is height of the sprite that wants to be drawn.
unsigned char Random_Drawable_Y_Pos(unsigned char height) {
	return (((Random()>>2) % (GameMaxY-GameMinY+1-height+1)) + GameMinY+height-1);
}


// function that checks if two square objects are touching
// Returns 1 if any of the corners from the first object is in second object
unsigned char checkTouching(
	unsigned char X1, unsigned char Y1, unsigned char W1, unsigned char H1,
	unsigned char X2, unsigned char Y2, unsigned char W2, unsigned char H2) {
	
	// this is done to make animations more realistic
	W1-=1;
	W2-=1;
	H1-=1;
	H2-=1;
	
	// right bottom corner check (X1 + W1, Y1)
	if ((X1 + W1 >= X2) && (X1 + W1 <= X2 + W2) && (Y1 >= Y2 - H2) && (Y1 <= Y2))
		return 1;
	// right upper corner check (X1 + W1, Y1 - H1)
	if ((X1 + W1 >= X2) && (X1 + W1 <= X2 + W2) && (Y1 - H1 >= Y2 - H2) && (Y1 - H1 <= Y2))
		return 1;
	// left upper corner check (X1, Y1 - H1)
	if ((X1 >= X2) && (X1 <= X2 + W2) && (Y1 - H1 >= Y2 - H2) && (Y1 - H1 <= Y2))
		return 1;
	// left bottom corner check (X1, Y1)
	if ((X1 >= X2) && (X1 <= X2 + W2) && (Y1 >= Y2 - H2) && (Y1 <= Y2))
		return 1;
	
	// else return 0
	return 0;												
}

// function that checks if the missile and the objects are touching
unsigned char checkTouchingMissileVsSprite(GeneralMissile missile, GeneralSprite sprite) {
	return checkTouching(missile.x, missile.y, missile.width, missile.height,
											 sprite.x, sprite.y, sprite.width, sprite.height);
}

// function that checks if 2 objects of the same structure are touching
unsigned char checkTouchingSpriteVsSprite(GeneralSprite sprite01, GeneralSprite sprite02) {
	return checkTouching(sprite01.x, sprite01.y, sprite01.width, sprite01.height,
											 sprite02.x, sprite02.y, sprite02.width, sprite02.height);
}


// This makes sure that the user released the button after some point in the game.
// E.g. this prevents that the user skips the "end" screen, which informs the user whether he won or lost.
// E.g. this prevents that the user automatically shoots after he chose to rerun the game.
unsigned char fireButtonReleased;

// operations necessary for game restart
void RestartGame(void) {
	int i;
	
	// presume that the button wasn't released after game was restarted
	fireButtonReleased = 0;
	
	// give life to the MOTHERSHIP!
	Ship.x = 0;
	Ship.life = MaxShipsLife;
	Ship.Missile.life = 0;
	Ship.special_weapon_status = 0;
	
	// give life to the BEASTS!
	// majority of them will be off screen, and once they get
	// in the screen, they will be alive
	for(i=0; i<NumberOfEnemies; i++){
    Enemy[i].x = SCREENW - Enemy[i].width - Enemy[i].width + (i/2)*(Enemy[i].width+8);
    Enemy[i].y = 22 + 15*(i%2);
    Enemy[i].life = MaxEnemyLife;
		Enemy[i].onScreen = 0;
    Enemy[i].Missile.x = Enemy[i].x - Enemy[i].Missile.width;
		Enemy[i].Missile.y = Enemy[i].y - Enemy[i].height/2;
		Enemy[i].Missile.life = 0;
	}
}

unsigned char isEnemyOnScreen(unsigned char enemyNum) {
	return (Enemy[enemyNum].x + Enemy[enemyNum].width - 1 <= SCREENW - 1);
}

unsigned char willEnemyBumpOtherStuff(unsigned char enemyNum, signed int deltaX, signed int deltaY) {
	int i;
	
	// scroll through all enemies
	for(i=0; i<NumberOfEnemies; i++){
		// skip enemy himself or the dead ones
		if ((i == enemyNum) || (Enemy[i].life == 0))
			continue;
		
		// if it touches any other alive enemies, return positive
		if (checkTouching(Enemy[enemyNum].x + deltaX, Enemy[enemyNum].y + deltaY, Enemy[enemyNum].width, Enemy[enemyNum].height,
											 Enemy[i].x, Enemy[i].y, Enemy[i].width, Enemy[i].height))
			return 1;
  }
	
	// check if it touches its surroundings by checking
	// if its edge points are beyond screen coordinate system;
	if ( //(Enemy[enemyNum].x + deltaX + Enemy[enemyNum].width - 1 > SCREENW - 1) || //remove checking of the right end
		 (Enemy[enemyNum].x == 0) ||
	   (Enemy[enemyNum].y + deltaY > GameMaxY) ||
		 (Enemy[enemyNum].y + deltaY - Enemy[enemyNum].height + 1 < GameMinY))
		return 1;
	
	return 0;
}

// turn off green LED
void TurnOffSpecialLED(void) {
	GPIO_PORTB_DATA_R &= ~0x10;
}

// turn off red LED
void TurnOffLifeLED(void) {
	GPIO_PORTB_DATA_R &= ~0x20;
}
	
// check if game is over
unsigned char isGameOver() {
	int i = 0;
	unsigned char enemiesAreDead = 1;
	
	// if ship is dead game is over
	if (Ship.life == 0)
		return 1;
	else {
		// if ship is alive 
		// and all enemies are dead
		// the game is over
		for(i=0; i < NumberOfEnemies; i++){
			if (Enemy[i].life > 0)
				enemiesAreDead = 0;
		}
		
		if (enemiesAreDead)
			return 1;
	}
	
	// in all other cases, game is still on
	return 0;
}

void GameOver(void) {
	// turn off LEDs
	GPIO_PORTB_DATA_R &= ~0x30;
	
	// check if fire button was released after game was done
	fireButtonReleased = (!Fire_Button_Pressed()) & 0x1;
	
	// if won
	if (Ship.life != 0)
		Nokia5110_PrintBMP(12, 41, _my_won, 0);
	else
		Nokia5110_PrintBMP(12, 41, _my_lost, 0);
}

// game engine position calculations, life etc.
void GameEngineOperations(void) {
	int i = 0;
	
	// FIELD OPERATIONS
	// every 6 systicks move the fields
	if (SystickCounter % 6 == 0) {
		FieldCounter = (FieldCounter + 1)%12;
	}
	
	
	// SHIP OPERATIONS
	ADCdata = ADC0_In();
	Ship.y = Convert(ADCdata);
	
	// operation if missile is still alive
	if (Ship.Missile.life) {
		Ship.Missile.x += 1;
		
		// check if the rocket is outside of the screen
		if ((Ship.Missile.x + Ship.Missile.width) > SCREENW)
			Ship.Missile.life = 0;
		// check if the rocket hit the enemy
		else {
			for(i=0; i < NumberOfEnemies; i++){
				if(Enemy[i].life > 0 && Enemy[i].onScreen){
					if (checkTouchingMissileVsSprite(Ship.Missile, Enemy[i])) {
						// decrease enemy's life
						Enemy[i].life--;
						// missile is dead now
						Ship.Missile.life = 0x0;
						// play fire sound
						Sound_Play(invaderkilled, invaderkilled_Count);
					}
				}
			}
		}
	}
	// check if fire was pressed
	else if (Fire_Button_Pressed() & fireButtonReleased) {
		// missile is now "alive"
		Ship.Missile.life = 1;
		Ship.Missile.x = 16;
		Ship.Missile.y = Ship.y - Ship.height/2 + Ship.Missile.height/2;
		
		// play fire sound
		Sound_Play(shoot, shoot_Count);
	}
	else if (!Fire_Button_Pressed())
		fireButtonReleased = 1;
	
	// is a special button pressed? And all tokens are here??!
	// well then it's SPECIAL WEAPON TIME!!!
	if (Special_Button_Pressed() && Ship.special_weapon_status == MaxTokens) {
		// reset number of collected tokens
		Ship.special_weapon_status = 0;
		// turn off LED that might be still turned on
		TurnOffSpecialLED();
		
		// set the special weapon counter
		SpecialWeaponIgnitedTimer = 25 * SpecialNumOfExpl / SpecialExplosionsAtOnce;
		
		// substract 3 lives from the present enemies
		for(i=0; i < NumberOfEnemies; i++){
			// substract only if it's on screen
			if (Enemy[i].onScreen) {
				if (Enemy[i].life > 3)
					Enemy[i].life -= 3;
				else
					Enemy[i].life = 0;
			}
		}
	}
	
	
	// ENEMIES OPERATIONS
	for(i=0; i < NumberOfEnemies; i++){
		if(Enemy[i].life > 0){
			// move enemies towards ship (in X direction);
			// enemy dies once it is out of screen
			if (SystickCounter % systickNumForEnemyMoveX == 0) {
				// kill enemy if he is at the end
				if (Enemy[i].x == 0)
					Enemy[i].life = 0;
				// check if the enemy will bump into another enemy or it will go off the map.
				// if not, move it forward!!!
				else if (!willEnemyBumpOtherStuff(i, -1, 0)) {
					Enemy[i].x -= 1;
					// if enemy is off screen, check if it arrived on screen
					if (Enemy[i].onScreen == 0)
						Enemy[i].onScreen = isEnemyOnScreen(i);
				}
			}
			// Random decision where to move enemy.
			// Random output in X direction is -1 or 0.
			// Random output in Y direction is -1, 0 or 1
			// temp01 = (Random() % 2) - 1;
			// move enemies in random Y direction every 25 systicks (0.5 seconds)
			if (SystickCounter % 25 == 0) {
				temp02 = (Random()>>2) % 3 - 1;
				// check if the enemy will bump into another enemy or it will go off the map
				if (!willEnemyBumpOtherStuff(i, 0, temp02)) {
					Enemy[i].y += temp02;
				}
			}
			
			// check if enemy reached the ship. If affirmative, the ship is destroyed
			if (checkTouchingSpriteVsSprite(Enemy[i], Ship))
				Ship.life = 0;
			
			// operation if missile is still alive
			if (Enemy[i].Missile.life) {
				// move enemy rocket to the left
				Enemy[i].Missile.x -= 1;
		
				// check if the rocket is outside of the screen
				if (Enemy[i].Missile.x <= 0)
					Enemy[i].Missile.life = 0;
				// check if the rocket hit the ship
				else if (checkTouchingMissileVsSprite(Enemy[i].Missile, Ship)) {
					// decrease ship's life
					Ship.life--;
					// missile is dead now
					Enemy[i].Missile.life = 0x0;
					// play hit sound
					Sound_Play(invaderkilled, invaderkilled_Count);
				}
			}
			// if the enemy is on screen, FIREEEEE!!!
			else if (Enemy[i].onScreen != 0){
				// random decision if the beast should fire;
				// 128 possible outcomes, so it should have a mean
				// fire rate around 2 seconds (if systick runs at 50Hz);
				// add i to further differentiate between enemies;
				temp01 = (Random() % 100);
				if (temp01 == 50) {
					// set enemy missile data
					Enemy[i].Missile.x = Enemy[i].x - Enemy[i].Missile.width;
					Enemy[i].Missile.y = Enemy[i].y - Enemy[i].height/2;
					Enemy[i].Missile.life = 1;
					// play fire sound
					// Sound_Play(fastinvader3, fastinvader3_Count);
				}
			}
    }
  }
	
	
	// SPECIAL WEAPON TOKEN OPERATIONS
	if (Token.life != 0) {
		// if out of map, kill it with fire!!!
		if (Token.x == 0)
			Token.life = 0;
		//else move it towards the ship
		else if (SystickCounter % 3 == 0)
			Token.x--;
		
		// check if token is collected;
		if (checkTouchingSpriteVsSprite(Token, Ship)) {
			// kill token
			Token.life = 0;
			// increase number of collected tokens
			Ship.special_weapon_status++;
		}
	}
	// generate token every 250 systicks (5 seconds)
	else if ((SystickCounter % 250 == 0) && (Ship.special_weapon_status != MaxTokens)) {
		temp02 = ((Random()>>2) % (GameMaxY-GameMinY+1-Token.height+1)) + GameMinY+Token.height-1;
		Token.x = 78;
    Token.y = temp02;
    Token.life = 1;
	}
	
	
	// OTHER OPERATIONS
	// toggle red LED if only one heart is left
	if ((Ship.life == 1) & (SystickCounter % 6 == 0))
		GPIO_PORTB_DATA_R ^= 0x20;
	// toggle green LED if special weapon is ready
	if ((Ship.special_weapon_status == MaxTokens) & (SystickCounter % 6 == 0))
		GPIO_PORTB_DATA_R ^= 0x10;
}

// render all data on screen
void RenderingOperations(void) {
	int i = 0;
	
	// clear whole screen buffer
	Nokia5110_ClearBuffer();	
	
	
	// FIELD OPERATIONS
	// update and draw 7 fields
	for(i=0;i<7;i++){
		Nokia5110_PrintBMP(i*12, 47, _my_Field_ptr[(i+FieldCounter)%12], 0);
	}
	
	
	// SHIP OPERATIONS
	// change image every 8 ticks
	Nokia5110_PrintBMP(Ship.x, Ship.y, Ship.image[(SystickCounter&0x0F)/8], 0);
	
	if (Ship.Missile.life)
		Nokia5110_PrintBMP(Ship.Missile.x, Ship.Missile.y, Ship.Missile.image[(SystickCounter&0x0F)/8], 0);
	
	// countdown the special weapon timer and print explosions;
	// print 5 by 5 explosions
	if (SpecialWeaponIgnitedTimer) {
		// change positions of explosions by a refresh rate
		// randomize explosions positions		
		if (SpecialWeaponIgnitedTimer % SpecialExplRefreshRate == 0) {
			for (i=0; i < SpecialExplosionsAtOnce; i++) {
				SpecialImagePointers[i] = _my_explosions_ptr[Random()%3];
				SpecialPositionsX[i] = Random_Drawable_X_Pos((SpecialImagePointers[i])[18]);
				SpecialPositionsY[i] = Random_Drawable_Y_Pos((SpecialImagePointers[i])[22]);
			}
		}
		
		// draw explosions
		for (i=0; i < SpecialExplosionsAtOnce; i++) {
			Nokia5110_PrintBMP(SpecialPositionsX[i],
												 SpecialPositionsY[i],
												 SpecialImagePointers[i], 0);
		}
		
		// decrease counter
		SpecialWeaponIgnitedTimer -= 1;
	}
	
	// ENEMIES OPERATIONS
	for(i=0; i < NumberOfEnemies; i++){
		if(Enemy[i].life > 0 && Enemy[i].onScreen){
			// draw enemy
			Nokia5110_PrintBMP(Enemy[i].x, Enemy[i].y, Enemy[i].image[(SystickCounter&0x0F)/8], 0);
			
			// if missile is alive
			if (Enemy[i].Missile.life) {
				Nokia5110_PrintBMP(Enemy[i].Missile.x, Enemy[i].Missile.y, Enemy[i].Missile.image[(SystickCounter&0x0F)/8], 0);
			}
		}
	}
	
	
	// TOKEN OPERATIONS
	if (Token.life > 0)
		Nokia5110_PrintBMP(Token.x, Token.y, Token.image[(SystickCounter&0x0F)/8], 0);
	
	
	// OTHER OPERATIONS
	// print horizontal separator line
	Nokia5110_PrintBMP(0, HeaderSeparatorYPos, _my_above_line, 0);
	
	// print remaining hearts
	for(i=0; i<Ship.life; i++){
		Nokia5110_PrintBMP(1 + i*9, 6, _my_heart, 0);
	}
	
	// print collected and empty coins
	for(i=0; i < MaxTokens; i++){
		if (i < Ship.special_weapon_status)
			Nokia5110_PrintBMP(76 - i*7, 6, _my_coin_01, 0);
		else
			Nokia5110_PrintBMP(76 - i*7, 6, _my_coin_00, 0);
	}
	
	// draw finishing screen if the game is over
	// Otherwise, increase counter (render on and on and on...)
	if (isGameOver())
		GameOver();
	else
		SystickCounter++;
}


// Called at 50Hz
void SysTick_Handler(void){
	// calculate only if game is still running
	if (!isGameOver())
		GameEngineOperations();
	else if (Fire_Button_Pressed() & fireButtonReleased)
		RestartGame();
	
	// render all objects
	RenderingOperations();
	
	// set systick executed flag
	Flag = 1;
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


// delay function. Try not to use it :)
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
