#include "holberton.h"
/**
 *print_times_table - prints the n times table
 *@n: n times table
 *Return: it is suppossed to be 0
 */
void print_times_table(int n)
{
	int rows, columns, aux, d, u;

	if (n >= 0 && n < 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				aux = rows * columns;
				d = (aux / 10);
				u = (aux % 10);
					if (aux >= 100)
					{
						_putchar((d / 10) + '0');
						_putchar((d % 10) + '0');
					}
					if (aux >= 10 && aux < 100)
					{
						_putchar(d + '0');
					}
					_putchar(u + '0');
					if (columns < n)
					{
					_putchar(',');
					_putchar(' ');
					if ((rows *(columns + 1)) < 10)
					    _putchar(' ');
					if ((rows *(columns + 1 )) < 100)
					    _putchar(' ');
					}
			}
			_putchar('\n');
		}
	}
}
