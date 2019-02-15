#include "holberton.h"
/**
 *print_square -prints a square
 *
 *@size: defines width and length of square
 *
 *Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (x = 0 ; x < size; x++)
		{
			for (y = 0 ; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
