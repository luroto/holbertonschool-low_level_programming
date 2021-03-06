#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - Prints numbers, as function name indicates
 *@separator: String to be printed between numbers
 *@n: number of arguments
 *Return: It's a void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numeritos;
	unsigned int x;

	va_start(numeritos, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(numeritos, int));
		if (separator != NULL && x < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(numeritos);
	printf("\n");
}
