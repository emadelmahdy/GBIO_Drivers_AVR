/*
 * GBIO_Drivers_AVR.h
 *
 * Created: 7/24/2018 6:06:12 PM
 *  Author: em139
 */ 


#ifndef GBIO_DRIVERS_AVR_H_
#define GBIO_DRIVERS_AVR_H_

#define A 0x39
#define B 0x36
#define C 0x33
#define D 0x30

#define input 0
#define output 1

void PortDir(char port ,char state);
void BinDir(char port , char bin , char state);
void PortSet(char port);
void PortReset(char port);
void BinSet (char port , char bin);
void BinReset (char port , char bin);
void PortWrite(char port,char value);
char PortRead(char port);
void BinWrite(char port , char bin,char value );
char BinRead(char port,char bin);





#endif /* GBIO_DRIVERS_AVR_H_ */