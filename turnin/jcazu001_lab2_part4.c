/*	Author: jcazu001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include <simAVRHeader.h>
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // make ports A, B, and C input sensors
	DDRC = 0x00; PORTB = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRB = 0xFF; PORTD = 0x00; //Port D is an output
//	unsigned chcr tmpB = 0x00; // Temporary variable to hold the value of B
	//	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
	unsigned short sumW;
	unsigned short maxW = 0x008C; // this is 140 kg in binary
	unsigned short ACDiff;
	unsigned short CADiff;
	unsigned char warning1;
	unsigned char warning2;

	while(1) {
	sumW = PINA + PINB + PINC;
	ACDiff = PINA - PINC;
	CADiff = PINC - PINA;
if (sumW > maxW)
{
warning1 =  0x01;
}

else {
 warning1 = 0x00; 
}

if (ACDiff > 0x50 || CADiff > 0x05 )
{
warning2 = 0x02;
} 
 PIND = ((sumW & 0x00FC) | warning1 | warning2);	
	}
		return 1;													 												 				}														 												 					 						 																	 					
