#include "holberton.h"
/**
 *print_diagonal - printing a diagonal line on the terminal
 *
 *@n: x prints the number of spaces
 *
 *Return : none
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
			for (x = 1 ; x < y ; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
