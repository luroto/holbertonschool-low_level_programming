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
	char *arg;

	va_start(listofstr, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			arg = va_arg(listofstr, char *);
			if (arg == NULL)
			{
				printf("%p", arg);
			}
			else
			{
				printf("%s", arg);
			}
			if (separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	va_end(listofstr);
	}
	printf("\n");
}
