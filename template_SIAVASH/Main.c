/*********************************************************************************************************
**--------------Template Info---------------------------------------------------------------------------------
** Last modified Date:  2025-01-05
** Last Version:        V1.00
** Descriptions:        This template includes all the peripheral libraries covered in the Computer Architecture 
**											course, as well as instructions for SysTick and exception configuration.
** Author:    					Saman Alipour
**--------------------------------------------------------------------------------------------------------       
*********************************************************************************************************/
#include "Main.h"

// Button pins: P2.10(INT0), P2.11(INT1), P2.12(INT2)
// LED pins: P2.0, P2.1, P2.2, P2.3, P2.4, P2.5, P2.6, P2.7
// Joystick pins: P1.26(Down), P1.27(Left), P1.28(Right), P1.29(Up)
// ADC channel: 5
// Audio freq: const int freqs[8]={4240,3779,3367,3175,2834,2525,2249,2120};
// uint16_t SinTable[45] =                                       
// {
//     410, 467, 523, 576, 627, 673, 714, 749, 778,
//     799, 813, 819, 817, 807, 789, 764, 732, 694, 
//     650, 602, 550, 495, 438, 381, 324, 270, 217,
//     169, 125, 87 , 55 , 30 , 12 , 2  , 0  , 6  ,   
//     20 , 41 , 70 , 105, 146, 193, 243, 297, 353
// };
// Simulator DARMP1.DLL		-pLPC1768
// Debugger  TARMP1.DLL		-pLPC1768
// LandTiger TARMP1.DLL		-pLPC1768 -dLandTiger


//example of passing 3 matrices to the subroutin in ASM, the result is stored in matrix C
//extern void bitMatrixMultiplication(unsigned char* A, unsigned char* B, unsigned char* C);
//unsigned char test_MatrixA[] = {0x20, 0x3F, 0xC8, 0x4D, 0x76, 0x58, 0x48, 0x50};
//unsigned char test_MatrixB[] = {0Xf8, 0x7C, 0x3E, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1};
//unsigned char test_MatrixC[8];  //dummy value


int main(){
	SystemInit();

	//DAC
		//DAC_init();
		//DAC_write(500);
	
	//Timer std timer is 25MHz  //0.5 sec 0.5*25000000    // 1 sec 1*25000000    //2 sec 2*25000000 
	
		//init_timer_SRI(0,0xFF,0b000);			//stop reset interrupt
		//enable_timer(0);
		//uint32_t timer_value = read_timer(0);
	
	//Delay 
		//used for button debouncing
		init_timer_SRI(3,25000,0b011);			//1ms delay
		enable_timer(3);
		//delay_ms(50);
	
	//Button
		//BUTTON_init();
	
	//LED
		//LED_init();
		//LED_On(0);
	  //LED_Off(0);
		//LED_Out(255);
	
	//Joystick
		//joystick_init();
		
	//RIT  is 100MHz so  //1 sec = 1* 100000000  //50ms=  0.05* 100000000
		//init_RIT(0xFFF);
		//enable_RIT();
		
	//ADC
		//ADC_init();
		//ADC_start_conversion();
	
	//GLCD
		//LCD_Initialization();
		//LCD_Clear(Black);
		//PutChar(0,0,'a',White,Black);
		//GUI_Text(0,0,(uint8_t *)"Hello world!!",White,Black);
		
	//Touch
		//TP_Init();
		//TouchPanel_Calibrate();
		//TP_DrawPoint(display.x,display.y);
		//getDisplayPoint(&display, Read_Ads7846(), &matrix );
	
	while(1){
		
	}
	
}