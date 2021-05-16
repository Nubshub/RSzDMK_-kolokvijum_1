#include "pin.h"


void pinSetValue(unsigned char port, unsigned char pin, unsigned char value)
{
// Postavljanje vrednosti pina
	switch(port)
	{
		case PORT_B:
		if (value == HIGH)
		PORTB |= 1 << pin;
		else
		PORTB &= ~(1 << pin);
		break;
		case PORT_C:
		if (value == HIGH)
		PORTC |= 1 << pin;
		else
		PORTC &= ~(1 << pin);
		break;
		case PORT_D:
		if (value == HIGH)
		PORTD |= 1 << pin;
		else
		PORTD &= ~(1 << pin);

		break;
		default:
		break;
	}
}
/****************************************************************************
**************/
void pinInit(unsigned char port, unsigned char pin, unsigned char direction)
{
// Inicijalizacija smera pina
switch (port)
{
case PORT_B:
if (direction == OUTPUT)
DDRB |= 1 << pin;
else
DDRB &= ~(1 << pin);
break;
case PORT_C:
if (direction == OUTPUT)
DDRC |= 1 << pin;
else
DDRC &= ~(1 << pin);
break;
case PORT_D:
if (direction == OUTPUT)
DDRD |= 1 << pin;
else
DDRD &= ~(1 << pin);
break;
default:
break;
}
}

