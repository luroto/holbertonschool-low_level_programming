#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - prints anything
 *
 *@format: type of arguments
 *
 *Return: It's a void function
 */
void print_all(const char * const format, ...)
{
	va_list cualquiera;
	int i = 0, conta = 0;

	va_start(cualquiera, format);
	while (format[i] && format)
	{
		switch(format[i])
		{
		case 'c': printf("%c", va_arg(cualquiera, int));
			break;
		case 'f': printf("%f", va_arg(cualquiera, double));
			break;
		case 'i': printf("%i", va_arg(cualquiera, int));
			break;
		case 's':
			if (cualquiera == NULL)
			{
				printf("%p", va_arg(cualquiera, char*));
				break;
			}
				printf("%s", va_arg(cualquiera, char*));
			break;
		default:
			i++;
			continue;
		}
		if (conta != (i - 1))
		{
			printf(", ");
		}
		i++;
		conta++;
	}
	va_end(cualquiera);
	printf("\n");
}
