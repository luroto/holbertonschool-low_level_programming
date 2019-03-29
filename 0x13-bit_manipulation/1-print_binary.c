#include <stdio.h>
#include "holberton.h"
/**
 *print_morethanzero - prints the binary for certain number
 *@n: Source number
 *@modu: stores the changed n
 *Returns: nothing
 */
void print_morethanzero(unsigned long int n, unsigned long int modu)
{
	if (n != 0)
	{
		modu =  n & 1;
		n = n >> 1;
		print_morethanzero(n, modu);
		_putchar(modu + '0');
	}

}
/**
 *print_binary - For printing numbers different than zero
 *@n: Source number
 *Return: It's a void function
 */
void print_binary(unsigned long int n)
{
	unsigned long int modu = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_morethanzero(n, modu);
	}
}
