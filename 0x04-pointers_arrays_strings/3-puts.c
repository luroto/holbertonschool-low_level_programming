
#include "holberton.h"
/**
 *_puts - Print a string using a pointer
 *
 *@str - Source of the string
 *
 *Return: It is supposed to be 0
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
