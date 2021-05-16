
#include <util/delay.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "arrays.h"
#include "pin.h"
#include "../usart/usart.h"
#include "../time0/time0.h"

int main()
{
	usartInit(9600);

	int16_t prvi_element;
	int16_t razlika;
	int16_t n;

	while(1)
	{
		usartPutString_P(PSTR("Unesite prvi element:\r\n"));
		while(!usartAvailable())
		;

		_delay_ms(100);
		usartGetString(prvi_element);


		usartPutString_P(PSTR("Unesite razliku:\r\n"));
		while(!usartAvailable())
		;

		_delay_ms(100);
		usartGetString(razlika);

		usartPutString_P(PSTR("Unesite broj n:\r\n"));
		while(!usartAvailable())
		;

		_delay_ms(100);
		usartGetString(n);

		usartPutString("n-ti element niza je: ");
		usartPutString(Element(prvi_element, razlika, n));


	}

	return 0;
}
