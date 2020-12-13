#include <stdint.h>
#include <TM4C123.h>  // adding the board library 	

void delayms(int time);

void delayms(int time)
{
int x,y;

	for (x = 0; x <= time; x++){
		for (y = 0; y <= 7900; y++){
}
}
}	
		
int main (void){	
	
	SYSCTL -> RCC|= 0x2400540; // setting the system clock (RCC = Run-Mode Clock Configuration)
	SYSCTL -> RCGCGPIO |= 0x20; // enable clock for GPIOF (RCGCGPIO = General-Purpose Input/Output Run Mode Clock Gating Control)
	GPIOF  -> DIR	|= 0x02 | 0x04 | 0x08; // PF2 (blue LED) or PF3 (green LED) is an output (DIR = GPIO Direction)
	GPIOF  -> DEN |= 0x12 | 0x04 | 0x08; // PF2 or PF3 is an digital function (DEN = GPIO Digital Enable)
	GPIOF  -> CR = 0x01; // enable GPIOPUR register 
	GPIOF  -> PUR |= 0x10; // enable the pull up resistor on switch one
	
	int blue_LED = 0x04; // declaring the blue LED 
	int green_LED = 0x08; // declaring the green LED 
	int red_LED = 0x02; // declaring the red LED
	int button = 0x10; // declaring the button 
	int state; // declaring a state variable
	
while (1) // infinate loop 
{
	state = GPIOF -> DATA & button; // setting state to data along with the button
		GPIOF -> DATA = (state >> 2); // putting the state to the blue LED
		
}
}