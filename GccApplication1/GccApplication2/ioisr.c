/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** ioisr.c
**
** Beschrijving:	ISR on PORTD demonstrattion  
** Target:			AVR mcu
** Build:			avr-gcc -std=c99 -Wall -O3 -mmcu=atmega128 -D F_CPU=8000000UL -c ioisr.c
**					avr-gcc -g -mmcu=atmega128 -o ioisr.elf ioisr.o
**					avr-objcopy -O ihex ioisr.elf ioisr.hex 
**					or type 'make'
** Author: 			dkroeske@gmail.com
** -------------------------------------------------------------------------*/

#define F_CPU 8E6
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "lcd.h"


/******************************************************************/
void wait( int ms )
/* 
short:			Busy wait number of millisecs
inputs:			int ms (Number of millisecs to busy wait)
outputs:	
notes:			Busy wait, not very accurate. Make sure (external)
				clock value is set. This is used by _delay_ms inside
				util/delay.h
Version :    	DMK, Initial code
*******************************************************************/
{
	for (int i=0; i<ms; i++)
	{
		_delay_ms( 1 );		// library function (max 30 ms at 8MHz)
	}
}

/******************************************************************/
ISR( INT1_vect )
/* 
short:			ISR INT0
inputs:			
outputs:	
notes:			Set PORTD.5
Version :    	DMK, Initial code
*******************************************************************/
{	
  // PORTD |= (1<<5);	//aan	
  if(PORTA < 128)
  {
	PORTA = (PORTA << 1);
  } else {
	  PORTA = 1;
  }
}

/******************************************************************/
ISR( INT2_vect )
/* 
short:			ISR INT1
inputs:			
outputs:	
notes:			Clear PORTD.5
Version :    	DMK, Initial code
*******************************************************************/
{
  //PORTD &= ~(1<<5);		//uit
  if(PORTA > 1)
  {
	PORTA = (PORTA >> 1);
  } else {
	  PORTA = 128;
  }
}

const uint8_t bin_code[16] = {
	0b00111111, //0
	0b00000110,//1
	0b01011011,//2
	0b01001111,//3
	0b01100110,//4
	0b01101101,//5
	0b01111101,//6
	0b00000111,//7
	0b01111111,//8
	0b01101111,//9
	0b01110111,//a
	0b01111100,//b
	0b00111001,//c
	0b01011110,//d
	0b01111001,//e
	0b01110001,//f
	};

void Week2OpdrachtB3(int digit){
	DDRD = 0xFF;	//D on output
	
	if(digit >= 0 || digit <= 15 ){
		//Digit als HEX printen
		PORTD = bin_code[digit];
		} else{
		//Print de letter 'E' van Error
		PORTD = 0b01111001;
	}
}

void Week2OpdrachtB2(void){
	// Init I/O
	DDRD = 0xF0;			// PORTD(7:4) output, PORTD(3:0) input
	DDRA = 0xFF;			//Output
	// Init Interrupt hardware
	EICRA |= 0x3C;			// INT1 & INT2 rising edge
	EIMSK |= 0x06;			// Enable INT1 & INT2
	
	// Enable global interrupt system
	//SREG = 0x80;			// Of direct via SREG of via wrapper
	sei();

	PORTA = 1;
	while (1)
	{
		PORTD ^= (1<<7);	// Toggle PORTD.7
		wait( 500 );
	}
}
typedef struct {
	unsigned char data;
	unsigned int delay ;
} PATTERN_STRUCT;

PATTERN_STRUCT pattern[] = {
	{0b01110001, 500}, {0b00111110, 500}, {0b11010100, 500}
	};
	

void Week2OpdrachtB4(void){
	DDRD = 0xFF;
	while (1==1)
	{
		// Set index to begin of pattern array
		int index = 0;
		// as long as delay has meaningful content
		while( pattern[index].delay != 0 ) {
			// Write data to PORTD
			PORTD = pattern[index].data;
			// wait
			wait(pattern[index].delay);
			// increment for next round
			index++;
		}
	}
}

/******************************************************************/
int main( void )
/*
short:			main() loop, entry point of executable
inputs:
outputs:
notes:			Slow background task after init ISR
Version :    	DMK, Initial code
*******************************************************************/
{
	//Opdracht B3 uitbreiding
	//for (int i =0; i < 16; i++)
	//{
		//Week2OpdrachtB3(i);
		//wait(700);
	//}
	
	
	DDRD=0xFF;
	DDRC= 0xFF;
	PORTD=0xFF;
	init();
	char a[] = "Marleen";
	set_cursor(3);
	display_text(a);

	return 1;
}


