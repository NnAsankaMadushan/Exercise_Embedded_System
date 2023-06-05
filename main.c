/*
 * ATMEGA.c
 *
 * Created: 6/5/2023 5:43:02 PM
 * Author : DELL
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL      /speed of the cpu/
void setLED(void)
{
	PORTB |=0B00100000; // force 5th bit to 1
}
void clearLED(void)
{
	PORTB &=0B11011111; // force 5th bit to 0
}
int buttonStatus(void)
{
	
	return (PIND & 0B00000001);
}
int main(void)
{
	//DDRD =DDRD & 0B11111110; // forcing 0th bit to 0
	//similerly
	DDRD &= 0B11111110;
	DDRB |= 0B00100000; // forcing 5th bit to 1
    /* Replace with your application code */
    while (1) 
    {
		
		
		if (buttonStatus())
		{
			clearLED();
		}
		else
		{
			setLED();
		}
    }
}