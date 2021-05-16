/*
 * arrays.c
 *
 *  Created on: May 16, 2021
 *      Author: Milos
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include "arrays.h"

int16_t Element(int16_t first_element, int16_t difference, int16_t n)
{

	int16_t rez;

	rez = first_element + (n - 1) * difference;

	return rez;
}


void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode)
{

}

