#include "lcd.h"
#define F_CPU 8E6
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
/*
 * lcd.c
 *
 * Created: 5-3-2020 12:04:06
 *  Author: marle
 */ 

void init()
{
	//PORTB = 0x30;
	//PORTC = 0x02;
	//wait(10);
	//PORTC = 0x00;
	//
	//PORTB = 0x30;
	//PORTC = 0x02;
	//wait(10);
	//PORTC = 0x00;
	//
	//PORTB = 0x30;
	//PORTC = 0x02;
	//wait(10);
	//PORTC = 0x00;
	//
	//PORTB = 0x20;
	//PORTC = 0x02;
	//wait(1);
	//PORTC = 0x00;
	//
	//PORTB = 0x01;
	//PORTC = 0x02;
	//PORTC = 0x00;
	//
	//PORTB = 0x01; //Clear
	//PORTC = 0x02;
	//PORTC = 0x00;
	//
	//PORTB = 0x06; //Write left to right
	//PORTC = 0x02;
	//PORTC = 0x00;
	//
	//PORTB = 0x0F; //Turn on cursor
	//PORTC = 0x02;
	//PORTC = 0x00;
	
	DDRC = 0xFF;
	PORTC = 0x00;
	
	PORTC = 0x20;
	writeLcd();
	
	PORTC = 0x20;
	writeLcd();
	PORTC = 0x80;
	writeLcd();
	
	PORTC = 0x00;
	writeLcd();
	PORTC = 0xF0;
	writeLcd();
	
	PORTC = 0x00;
	writeLcd();
	PORTC = 0x60;
	writeLcd();

}

void display_text(char *str)
{
	//PORTC = 0x01;
	//for (int i = 0; i < sizeof(str); i++)
	//{
		//PORTB = str[i];
		//PORTC = 0x02;
		//PORTC = 0x00;
	//}
	
	for(;*str; str++)
	{
		writeData(*str);
	}
}

void set_cursor(int position)
{
	DDRC = 0xFF;
	PORTC = 0x00;
	
	PORTC = 0xC0 + (position-16);
}

void writeLcd()
{
	PORTC |= (1<<3);
	wait(1);
	PORTC &= ~(1<<3);
	wait(1);
}

void writeData(unsigned char byte)
{
	PORTC = byte;
	PORTC |= (1<<2);
	writeLcd();
	PORTC = (byte<<4);
	PORTC |= (1<<2);
	writeLcd();
}