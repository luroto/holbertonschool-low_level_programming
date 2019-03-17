#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - prints strings
 *@separator: string to be printed between the strings
 *@n: number of strings
 *Return: It's a void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listofstr;
	unsigned int i;

	va_start(listofstr, n);
	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	for (i = 0; i < n; i++)
	{
		if (listofstr == NULL)
		{
			printf("%p", va_arg(listofstr, char *));
		}
		if (listofstr != NULL)
		{
			printf("%s", va_arg(listofstr, char *));
		}
		if (separator != NULL && i < (n - 1))
		{
		printf("%s", separator);
		}
	}
	va_end(listofstr);
	printf("\n");
}
