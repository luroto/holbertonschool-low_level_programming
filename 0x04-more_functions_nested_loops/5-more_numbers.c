#include "holberton.h"
/**
 *more_numbers - prints 5 times the numbers from 0 to 14
 *
 *Return: it's supposed to be 0
 */
void more_numbers(void)
{
	int c, x;

	for (c = 0; c <= 9 ; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10 && x <= 14)
			{
				_putchar((x / 10) + 48);
			}
			_putchar((x % 10) + 48);
		}
	_putchar('\n');
	}
}
