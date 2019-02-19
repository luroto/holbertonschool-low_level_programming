#include "holberton.h"
/**
 *print_rev - Prints a string in reverse
 *
 *@s: Stores the string
 *
 *Return: Given by the exercise
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	while (l > 0)
	{
		l--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
