#include "holberton.h"
/**
 *print_alphabet_x10 - Prints the alphabet for ten times
 *
 *Return: It is supposed to be zero
 */
void print_alphabet_x10(void)
{
	int alphab, counter;

	for (counter = 0 ; counter < 10 ; counter++)
		{
	for (alphab = 'a'; alphab <= 'z' ; alphab++)
	{
		_putchar(alphab);
	}
	_putchar('\n');
		}
}
