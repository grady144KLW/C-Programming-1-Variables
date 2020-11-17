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

int main (void)
{
	SYSCTL -> RCC|= 0x2400540; // setting the system clock (RCC = Run-Mode Clock Configuration)
	SYSCTL -> RCGCGPIO |= 0x20; // enable clock for GPIO (RCGCGPIO = General-Purpose Input/Output Run Mode Clock Gating Control)
	GPIOF  -> DIR	|=  0x02; // PF1 is an output (DIR = GPIO Direction)
	GPIOF  -> DEN |= 0x02; // PF1 is an digital function (DEN = GPIO Digital Enable)
	
	
	while(1) // infinate loop 
	{
		GPIOF -> DATA = 0x02; // turning on the red LED ()
		delayms(100);
		GPIOF -> DATA = 0x00; // turning off the red LED ()
		delayms(100);
	}		
}
