//#define F_CPU 8E6
//
//#include <avr/io.h>
//#include <util/delay.h>
//#include <stdint.h>
//#include <stdio.h>
//
//void Opdrachtw1b3(void);
//void Opdrachtw1b4(void);
//void Opdrachtw1b5(void);
//void Opdrachtw1b6(void);
//void Opdrachtw1b7(void);
//void Opdrachtw4b1(void);
//void Opdrachtw4b2(void);
//void adcStart(void);
//
//typedef enum {sstart, s1, s2, s3, sstop} ENUM_STATE;
//ENUM_STATE state;
//
//
//
///******************************************************************/
//void wait( int ms )
///* 
//short:			Busy wait number of millisecs
//inputs:			int ms (Number of millisecs to busy wait)
//outputs:	
//notes:			Busy wait, not very accurate. Make sure (external)
				//clock value is set. This is used by _delay_ms inside
				//util/delay.h
//Version :    	DMK, Initial code
//*******************************************************************/
//{
	//for (int i=0; i<ms; i++)
	//{
		//_delay_ms( 1 );		// library function (max 30 ms at 8MHz)
	//}
//}
//
///******************************************************************/
//int main( void )
///* 
//short:			main() loop, entry point of executable
//inputs:			
//outputs:	
//notes:			Looping forever, flipping bits on PORTD
//Version :    	DMK, Initial code
//*******************************************************************/
//{
	//Opdrachtw4b1();
//
	//return 1;
//}
//
//void Opdrachtw1b3(void)
//{
	//DDRC = 0xFE;		//C op lezen
	////PORTC = 0xFF;		// C0
	//
	//DDRD = 0xFF;		// D op schrijven
	////PORTD = 0x01;		// D1
	//
	//
	//while(1)
	//{
//
		//if (PINC & 0x01)
		//{
			//PORTD = 0x80;
			//wait(250);
			//PORTD = 0x00;
			//wait(250);
		//}
		//else
		//{
			//PORTD = 0x00;
		//}
		//wait(10);
	//}
//}
	//
//void Opdrachtw1b4(void){
		//DDRD = 0xFF;
		//PORTD = 0x01; // alleen D0 op schrijven 
		//uint8_t i = 0;
		//
		//while(1)
		//{	
			//PORTD = (1<<i);
			//i++;
			//wait(250);
			//if (i > 7)
			//{
				//i = 0;
			//}
		//}
		//
//}
//
//void Opdrachtw1b5(void)
//{
	//DDRD = 0xFF; // heel D op schrijven
	//uint8_t ledArray[] = {0x81, 0x42, 0x24, 0x18};
	//uint8_t i =0;
	//while (1)
	//{
		//PORTD = ledArray[i];
		//i++;
		//wait(250);
		//if (i > 3)
		//{
			//i = 0;
		//}
		//
	//}
			//
//}
//
//void Opdrachtw1b6(void)
//{
	//DDRC = 0xFE;		//C op lezen
	////PORTC = 0xFF;		// C0
	//
	//DDRD = 0xFF;		// D op schrijven
	////PORTD = 0x01;		// D1
	//
	//
	//while(1)
	//{
//
		//if (PINC & 0x01)
		//{
			//PORTD = 0x80;
			//wait(250);
			//PORTD = 0x00;
			//wait(250);
		//}
		//else
		//{
			//PORTD = 0x80;
			//wait(1000);
			//PORTD = 0x00;
			//wait(1000);
		//}
		//wait(10);
	//}
//}
//
//void Opdrachtw1b7(void)
//{
	//DDRC = 0x00;		//C op lezen
	//DDRD = 0xFF;		//D op schrijven
//
	//state = sstart;
	//while(1)
	//{
//
		//if (sstart)
		//{
		//
			//if(PINC & 0x80)
			//{
//
			//}
			//
			//if (PINC & 0x40)
			//{
				//state = s1;
			//}
			//
			//if (PINC & 0x20)
			//{
//
				//state = s2;
			//}
		//}	
		//
		//if(state = s1)
		//{
			//if(PINC & 0x80)//7
			//{
				//state = sstart;
			//}
			//
			//if (PINC & 0x20)//5
			//{
				//state = s2;
			//}
		//}
		//if(state = s2)
		//{
			//if(PINC & 0x80)
			//{
				//state = sstart;
			//}
			//
			//if (PINC & 0x40)
			//{
				//state = s1;
			//}
			//
			//if (PINC & 0x20)
			//{
				//state = s3;
			//}
		//}
		//if(state = s3)
		//{
			//if(PINC & 0x80)
			//{
				//state = sstart;
			//}
			//
			//if (PINC & 0x40)
			//{
				//state = sstop;
			//}
			//
			//if (PINC & 0x20)
			//{
				//state = sstop;
			//}
		//}
		//if(state = sstop)
		//{
			//if(PINC & 0x80)
			//{
				//state = sstart;
			//}
			//
		//}
		//
		//if(state = s1)
		//{
			//PORTD ^= 0xFF;
			//wait(250);
		//}
		//if (state = s2)
		//{
			//PORTD ^= 0xFF;
			//wait(750);
		//}
		//if (state = s3)
		//{
			//PORTD ^= 0xFF;
			//wait(100);
		//}
		//
		//
	//}
//}
//
//void Opdrachtw4b1(void)
//{
	//DDRF = 0x00; //F op lezen
	//DDRA = 0xFF; //A schrijven
	//DDRB = 0xFF; //B schrijven
	//ADMUX = 0x61;
	//ADCSRA = 0xD6;
//
	//
	//while (1)
	//{
		//PORTB = ADCL;
		//PORTA = ADCH;
		//wait(100);
	//}
//}

//void Opdrachtw4b2()
//{
	//DDRF = 0x00; //F op lezen
	//DDRA = 0xFF; //A op schrijven
	//DDRB = 0xFF; //B op schrijven
//
	//adcStart();
	//
	//while (1)
	//{
		//ADCSRA|=1<<ADFR;
		//PORTB = ADCL;
		//PORTA = ADCH;
		//wait(100);
	//}
//}
//
//void adcStart()
//{
	//ADMUX = 0b11100001;
	//ADCSRA = 0x10000110;
//}

#include <avr/io.h>
#include <util/delay.h>
#define BIT(x) ( 1<<x )
#define DDR_SPI DDRB // spi Data direction register
#define PORT_SPI PORTB // spi Output register
#define SPI_SCK 1 // PB1: spi Pin System Clock
#define SPI_MOSI 2 // PB2: spi Pin MOSI
#define SPI_MISO 3 // PB3: spi Pin MISO
#define SPI_SS 0 // PB0: spi Pin Slave Select
// wait(): busy waiting for 'ms' millisecond - used library: util/delay.h
void wait(int ms)
{
	for (int i=0; i<ms; i++)
	_delay_ms(1);
}

void spi_writeWord(unsigned address, unsigned char data)
{
	spi_slaveSelect(0);
	spi_write(address);
	spi_write(data);
	spi_slaveDeSelect(0);
}

void writeLedDisplay(int value)
{
	int n1, n2, n3, n4;
	if(value < 0)
	{
		int v = abs(value);
		n3 = v / 100; //honderdtal
		v = v - (n3*100); //honderdtal eraf
		n2 = v/10; //tiental
		v = v - (n2*10); //tiental eraf
		n1 = v; //rest
		n4 = 10;
	} 
	else 
	{
		//van links naar rechts (4-1)
		int v = value;
		n4 = v/1000; //duizendtal
		v = v - (n4*1000); //duizendtal eraf
		n3 = v / 100; //honderdtal
		v = v - (n3*100); //honderdtal eraf
		n2 = v/10; //tiental
		v = v - (n2*10); //tiental eraf
		n1 = v; //rest
	}
	
	
	spi_writeWord(4, n4);
	spi_writeWord(3, n3);
	spi_writeWord(2, n2);
	spi_writeWord(1, n1);
}

void spi_masterInit(void)
{
	DDR_SPI = 0xff; // All pins output: MOSI, SCK, SS, SS_display
	DDR_SPI &= ~BIT(SPI_MISO); // except: MISO input
	PORT_SPI |= BIT(SPI_SS); // SS_ADC == 1: deselect slave
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR1); // or: SPCR = 0b11010010;
	// Enable spi, MasterMode, Clock rate fck/64
	// bitrate=125kHz, Mode = 0: CPOL=0, CPPH=0
}
// Write a byte from master to slave
void spi_write( unsigned char data )
{
	SPDR = data; // Load byte --> starts transmission
	while( !(SPSR & BIT(SPIF)) ); // Wait for transmission complete
}
// Write a byte from master to slave and read a byte from slave - not used here
char spi_writeRead( unsigned char data )
{
	SPDR = data; // Load byte --> starts transmission
	while( !(SPSR & BIT(SPIF)) ); // Wait for transmission complete
	data = SPDR; // New received data (eventually, MISO) in SPDR
	return data; // Return received byte
}
// Select device on pinnumer PORTB
void spi_slaveSelect(unsigned char chipNumber)
{
	PORTB &= ~BIT(chipNumber);
}
// Deselect device on pinnumer PORTB
void spi_slaveDeSelect(unsigned char chipNumber)
{
	PORTB |= BIT(chipNumber);
}

// Initialize the driver chip (type MAX 7219)
void displayDriverInit()
{
	//0-3 aanzetten
	spi_slaveSelect(0); // Select display chip (MAX7219)
	spi_write(0x09); // Register 09: Decode Mode
	spi_write(0x0F); // -> 1's = BCD mode for all digits
	spi_slaveDeSelect(0); // Deselect display chip
	
	//intensiteit max 0x0A
	spi_slaveSelect(0); // Select dispaly chip
	spi_write(0x0A); // Register 0A: Intensity
	spi_write(0x0A); // -> Level 4 (in range [1..F])
	spi_slaveDeSelect(0); // Deselect display chip
	
	//Opnieuw laden
	spi_slaveSelect(0); // Select display chip
	spi_write(0x0B); // Register 0B: Scan-limit
	spi_write(0x03); // -> 1 = Display digits 0..3
	spi_slaveDeSelect(0); // Deselect display chip

	//niet laten slapen
	spi_slaveSelect(0); // Select display chip
	spi_write(0x0C); // Register 0B: Shutdown register
	spi_write(0x01); // -> 1 = Normal operation
	spi_slaveDeSelect(0); // Deselect display chip
}
// Set display on ('normal operation')
void displayOn()
{
	spi_slaveSelect(0); // Select display chip
	spi_write(0x0C); // Register 0B: Shutdown register
	spi_write(0x01); // -> 1 = Normal operation
	spi_slaveDeSelect(0); // Deselect display chip
}
// Set display off ('shut down')
void displayOff()
{
	spi_slaveSelect(0); // Select display chip
	spi_write(0x0C); // Register 0B: Shutdown register
	spi_write(0x00); // -> 1 = Normal operation
	spi_slaveDeSelect(0); // Deselect display chip
}
int main()
{
	DDRB=0x01; // Set PB0 pin as output for display select
	spi_masterInit(); // Initialize spi module
	displayDriverInit(); // Initialize display chip
	// clear display (all zero's)
	//for (char i =1; i<=4; i++)
	//{
		//spi_slaveSelect(0); // Select display chip
		//spi_write(i); // digit adress: (digit place)
		//spi_write(0); // digit value: 0
		//spi_slaveDeSelect(0); // Deselect display chip
	//}
	//wait(1000);
	//// write 4-digit data
	//for (char i =1; i<=4; i++)
	//{
		//spi_slaveSelect(0); // Select display chip
		//spi_write(i); // digit adress: (digit place)
		//spi_write(i); // digit value: i (= digit place)
		//spi_slaveDeSelect(0); // Deselect display chip
		//wait(1000);
	//}
	writeLedDisplay(-678);
	wait(1000);
	return (1);
}