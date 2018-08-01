/*
 * GBIO_Drivers_AVR.c
 *
 * Created: 7/24/2018 6:03:37 PM
 * Author : em139
 */ 

//#include <avr/io.h>
#include "GBIO_Drivers_AVR.h"


int main(void)
{
    
	PortDir(C,output);
	PortReset(C);
	//DDRC=0xff;
	//PORTC=0x00;
	
	
	//BinDir(A,0,input);
	BinDir(D,0,input);
	BinDir(B,0,input);
	while(1)
	{
		
		//PORTC=0xff;
		if(BinRead(B,0))
		{
			PortSet(C);
			
		}
		//BinSet(D,7);
		//BinSet(B,0);

		
		
		
	}
	
	
	
}

