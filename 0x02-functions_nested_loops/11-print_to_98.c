#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - print all natural numbers from n to 98
 *
 *@n: stores the input
 *
 *Return: void function
 */
void print_to_98(int n)
{
int x;

if (n < 98)
{
for (x = n;  x <= 98; x++)
{
if (x < 98)
{
printf("%d,", x);
}
else
{
printf("%d", x);
}
}
}
else if (n > 98)
{
for (x = n; x >= 98; x--)
{
if (x > 98)
{
printf("%d, ", x);
}
else
{
printf("%d", x);
}
}
}
else if (n == 98)
{
printf("%d", n);
}
putchar('\n');
}
