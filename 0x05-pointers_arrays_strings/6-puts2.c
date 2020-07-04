#include "holberton.h"
/**
 *puts2 - prints one char out of 2 of a string
 *
 *@str: stores the print
 *
 *Return: Provided by the exercise
 */
void puts2(char *str)
{
	int c, l = 0;

	while (*(str + l) != '\0')
	{
		l++;
}
	for (c = 0; c < l; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
