#include "holberton.h"
/**
 *puts_half -prints the second half of a string
 *
 *@str: pointer to a string
 *
 *Return: It is supposed to be 0
 */
void puts_half(char *str)
{
	int x = 0, l;

	while (*(str + x))
		{
			x++;
		}
	if (x % 2 == 0)
			l = x / 2;
	else if (x % 2 != 0)
				l = ((x - 1) / 2);
		while (l < x)
		{
			_putchar(str[l]);
			l++;
		}
		_putchar('\n');
}
