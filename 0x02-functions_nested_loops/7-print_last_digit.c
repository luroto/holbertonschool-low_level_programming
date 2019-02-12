#include "holberton.h"
/**
 *print_last_digit - Prints the last digit of a number
 *
 *@a: stores input
 *
 *Return: It is supposed to be zero
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b >= 0)
	{
		_putchar(b + '0');
	}
	else
	{
		 b = b * (-1);
		   _putchar(b +'0');
	}
	return (b);
}
