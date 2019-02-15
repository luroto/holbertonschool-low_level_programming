#include "holberton.h"
/**
 *print_line -prints a _ character n times
 *
 *@n: number of times the char has to be printed
 *
 *Return: it is supposed to be 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; x <= n; x++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
