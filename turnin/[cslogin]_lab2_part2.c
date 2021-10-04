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
	DDRA = 0x00;// PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRC = 0xFF;
//	unsigned chcr tmpB = 0x00; // Temporary variable to hold the value of B
	//	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
	while(1) {

	if (PINA == 0x00)
	{
	PINC = 0x04;	}

	else if (PINA == 0x01 || PINA == 0x02 || PINA == 0x03 || PINA == 0x04)
	{
	PINC = 0x03; 
	}

	else if (PINA == 0x03 || PINA == 0x05 || PINA == 0x09 || PINA == 0x0A || PINA == 0x06 || PINA == 0x0C)
	{
	PINC = 0x02;
	}

	else if (PINA == 0x07 || PINA == 0x0E || PINA == 0x0B || PINA == 0x0D)
	{
	PINC = 0x01;
	}

	else 
	{
	PINC = 0x00;
	}
	}
		return 1;													 												 				}														 												 					 						 																	 					
