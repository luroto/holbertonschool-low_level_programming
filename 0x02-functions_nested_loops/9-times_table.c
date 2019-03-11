#include "holberton.h"
/**
 *times_table - prints the 9 times table
 *
 *Return: it is suppossed to be 0
 */
void times_table(void)
{
	int rows, columns, aux, d, u;
	{
		for (rows = 0; rows <= 9; rows++)
		{
			for (columns = 0; columns <= 9; columns++)
			{
				aux = rows * columns;
				d = (aux / 10);
				u = (aux % 10);
				if (aux < 10 && aux != 0)
				{
					_putchar (' ');
				}
				if (aux >= 10)
				{
					_putchar(d + '0');
				}
				_putchar(u + '0');
				if (columns < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
