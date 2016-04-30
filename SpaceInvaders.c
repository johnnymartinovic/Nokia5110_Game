// SpaceInvaders.c
// Runs on LM4F120/TM4C123
// Jonathan Valvano and Daniel Valvano
// This is a starter project for the edX Lab 15
// In order for other students to play your game
// 1) You must leave the hardware configuration as defined
// 2) You must not add/remove any files from the project
// 3) You must add your code only this this C file
// I.e., if you wish to use code from sprite.c or sound.c, move that code in this file
// 4) It must compile with the 32k limit of the free Keil

// April 10, 2014
// http://www.spaceinvaders.de/
// sounds at http://www.classicgaming.cc/classics/spaceinvaders/sounds.php
// http://www.classicgaming.cc/classics/spaceinvaders/playguide.php
/* This example accompanies the books
   "Embedded Systems: Real Time Interfacing to Arm Cortex M Microcontrollers",
   ISBN: 978-1463590154, Jonathan Valvano, copyright (c) 2013

   "Embedded Systems: Introduction to Arm Cortex M Microcontrollers",
   ISBN: 978-1469998749, Jonathan Valvano, copyright (c) 2013

 Copyright 2014 by Jonathan W. Valvano, valvano@mail.utexas.edu
    You may use, edit, run or distribute this file
    as long as the above copyright notice remains
 THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 VALVANO SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 For more information about my classes, my research, and my books, see
 http://users.ece.utexas.edu/~valvano/
 */
// ******* Required Hardware I/O connections*******************
// Slide pot pin 1 connected to ground
// Slide pot pin 2 connected to PE2/AIN1
// Slide pot pin 3 connected to +3.3V 
// fire button connected to PE0
// special weapon fire button connected to PE1
// 8*R resistor DAC bit 0 on PB0 (least significant bit)
// 4*R resistor DAC bit 1 on PB1
// 2*R resistor DAC bit 2 on PB2
// 1*R resistor DAC bit 3 on PB3 (most significant bit)
// LED on PB4
// LED on PB5

// Blue Nokia 5110
// ---------------
// Signal        (Nokia 5110) LaunchPad pin
// Reset         (RST, pin 1) connected to PA7
// SSI0Fss       (CE,  pin 2) connected to PA3
// Data/Command  (DC,  pin 3) connected to PA6
// SSI0Tx        (Din, pin 4) connected to PA5
// SSI0Clk       (Clk, pin 5) connected to PA2
// 3.3V          (Vcc, pin 6) power
// back light    (BL,  pin 7) not connected, consists of 4 white LEDs which draw ~80mA total
// Ground        (Gnd, pin 8) ground

// Red SparkFun Nokia 5110 (LCD-10168)
// -----------------------------------
// Signal        (Nokia 5110) LaunchPad pin
// 3.3V          (VCC, pin 1) power
// Ground        (GND, pin 2) ground
// SSI0Fss       (SCE, pin 3) connected to PA3
// Reset         (RST, pin 4) connected to PA7
// Data/Command  (D/C, pin 5) connected to PA6
// SSI0Tx        (DN,  pin 6) connected to PA5
// SSI0Clk       (SCLK, pin 7) connected to PA2
// back light    (LED, pin 8) not connected, consists of 4 white LEDs which draw ~80mA total

#include "..//tm4c123gh6pm.h"
#include "Nokia5110.h"
#include "Random.h"
#include "TExaS.h"
#include "Images.c"
#include "Sounds.c"
#include "SpritesOps.c"
#include "HandlersOps.c"

void DisableInterrupts(void); // Disable interrupts
void EnableInterrupts(void);  // Enable interrupts

int main(void){
	TExaS_Init(SSI0_Real_Nokia5110_Scope);  // set system clock to 80 MHz
	
	DisableInterrupts();
	
	
	Random_Init(1);
  Nokia5110_Init();
  Nokia5110_ClearBuffer();
	Nokia5110_DisplayBuffer();
	SysTick_Init();
	// initialize Timer2 after Nokia5110_Init because of
	// error-prone registers operations (old and new registers
	// are not working good together)
	// 80MHz/11,025 cycles, which is about 7256
	Timer2_Init(7256);
	Ports_Init();
	
	InitSprites();
	
	// Countdown, after which all interrupts are enabled!
	// print 3
	Nokia5110_ClearBuffer();
	Nokia5110_PrintBMP(28, 41, _my_Countdown_03, 0);
	Nokia5110_DisplayBuffer();
	Delay100ms(1);
	
	// print 2
	Nokia5110_ClearBuffer();
	Nokia5110_PrintBMP(28, 41, _my_Countdown_02, 0);
	Nokia5110_DisplayBuffer();
	Delay100ms(1);
	// print 1
	Nokia5110_ClearBuffer();
	Nokia5110_PrintBMP(28, 41, _my_Countdown_01, 0);
	Nokia5110_DisplayBuffer();
	Delay100ms(1);
	// print GO
	Nokia5110_ClearBuffer();
	Nokia5110_PrintBMP(28, 41, _my_Countdown_GO, 0);
	Nokia5110_DisplayBuffer();
	Delay100ms(1);
	
	
	EnableInterrupts();

  /*
	Nokia5110_PrintBMP(32, 47, PlayerShip0, 0); // player ship middle bottom
  Nokia5110_PrintBMP(33, 47 - PLAYERH, Bunker0, 0);

  Nokia5110_PrintBMP(0, ENEMY10H - 1, SmallEnemy10PointA, 0);
  Nokia5110_PrintBMP(16, ENEMY10H - 1, SmallEnemy20PointA, 0);
  Nokia5110_PrintBMP(32, ENEMY10H - 1, SmallEnemy20PointA, 0);
  Nokia5110_PrintBMP(48, ENEMY10H - 1, SmallEnemy30PointA, 0);
  Nokia5110_PrintBMP(64, ENEMY10H - 1, SmallEnemy30PointA, 0);
	
  Nokia5110_Clear();
  Nokia5110_SetCursor(1, 1);
  Nokia5110_OutString("GAME OVER");
  Nokia5110_SetCursor(1, 2);
  Nokia5110_OutString("Nice try,");
  Nokia5110_SetCursor(1, 3);
  Nokia5110_OutString("Earthling!");
  Nokia5110_SetCursor(2, 4);
  Nokia5110_OutUDec(1234);
	
	*/
	
  while(1){
		if (Flag == 1) {
			Nokia5110_DisplayBuffer();
			
			Flag = 0;
		}
	}
	
}
