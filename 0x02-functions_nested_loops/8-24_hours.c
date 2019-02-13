#include "holberton.h"
/**
 *jack_bauer - prints a clock
 *
 *Return: It is supposed to be 0
 */
void jack_bauer(void)
{
	int h1, m1;

for (h1 = 00; h1 <= 23 ; h1++)
{
for (m1 = 0; m1 <= 59 ; m1++)
{
	_putchar(h1 / 10 + '0');
	_putchar(h1 % 10 + '0');
_putchar(':');
_putchar(m1 / 10 + '0');
_putchar(m1 % 10 + '0');
_putchar('\n');
}
}
}
