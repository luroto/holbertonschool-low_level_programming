#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of arguments
 *Return: the sum of all the parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int  x;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(argumentos, n);
	for (x = 0; x < n ; x++)
	{
		sum = sum + va_arg(argumentos, int);
	}
	va_end(argumentos);
	return (sum);
}
