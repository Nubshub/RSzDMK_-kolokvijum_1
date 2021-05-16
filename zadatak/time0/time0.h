

#ifndef TIME0_H_
#define TIME0_H_

#include <avr/io.h>


/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
unsigned long timer0DelayMs(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();

/**
 * calculateHalfPeriod - Funkcija koja izracunava polovinu prosledjene periode
 * @param period - input tipa unsigned long - Duzina periode
 * @return Povratna vrednost je tipa unsigned long i predstavlja polovinu periode
 */

#endif /* TIME0_H_ */
