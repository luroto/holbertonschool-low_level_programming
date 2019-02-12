#include "holberton.h"
/**
 *print_sign - prints the sign of a number
 *
 *@n: stores the number value
 *
 *Return: 1 if is greater than 0, 0 if is 0 and -1 if is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
return (0);
}
