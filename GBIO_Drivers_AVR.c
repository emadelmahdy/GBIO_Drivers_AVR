
#include "GBIO_Drivers_AVR.h"

void PortDir(char port ,char state)
{
	
	if (state==output)
	{
		(*(volatile unsigned char *)(port+1))=0xff;
	}
	else
	{
		(*(volatile unsigned char *)(port+1))=0x00;
	}
}
void BinDir(char port , char bin , char state)
{
	if (state==output)
	{
		(*(volatile unsigned char *)(port+1)) |=(bin<<1);
	}
	else
	{
		(*(volatile unsigned char *)(port+1)) &=~(bin<<1);
	}
}

void PortSet(char port)
{
	(*(volatile unsigned char *)(port+2))=0xff;
}
void PortReset(char port)
{
	(*(volatile unsigned char *)(port+2))=0x00;
}

void BinSet (char port , char bin)
{
	(*(volatile unsigned char *)(port+2)) |=(1<<bin);
}

void BinReset (char port , char bin)
{
	(*(volatile unsigned char *)(port+2)) &=~(1<<bin);
}
void PortWrite(char port,char value)
{
	(*(volatile unsigned char *)(port+2))=value;
}

char PortRead(char port)
{
	return (*(volatile unsigned char *)port);
}

void BinWrite(char port , char bin,char value )
{
	if (value==0)
	{
		(*(volatile unsigned char *)(port+2)) &=~(1<<bin);
	}
	else
	{
		(*(volatile unsigned char *)(port+2)) |=(1<<bin);
	}
}
char BinRead(char port,char bin)
{
	char result;
	result=(*(volatile unsigned char *)port) & (1<<bin);
	if (result==0)
	{
		return 0;
	}
	else
	return 1;
}