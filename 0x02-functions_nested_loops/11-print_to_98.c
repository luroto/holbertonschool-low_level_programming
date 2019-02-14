#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - print all natural numbers from n to 98
 *
 *@n : stores the input
 *
 */
void print_to_98(int n)
{
	int x;

if (n > 98)
{
	for (x =n ; n >= 98; n--)
{
	printf("%d, ", n);
}
	_putchar('\n');
}

if (n < 98)
{
	for(x = n ; n <= 98; n++)
{
	printf("%d, ", x);
}
	_putchar('\n');
}
if (n == 98)
{
	printf("%d,", x);
}
_putchar('\n');
}
