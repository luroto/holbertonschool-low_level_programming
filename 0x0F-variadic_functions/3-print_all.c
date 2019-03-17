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
	int i = 0;
	char *linea;

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
			linea = va_arg(cualquiera, char *);
			if (linea == NULL)
			{
				printf("%p", linea);
				break;
			}
			printf("%s", linea);
			break;
		default:
			i++;
			continue;
		}
		if (format[i +1 ] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(cualquiera);
	printf("\n");
}
