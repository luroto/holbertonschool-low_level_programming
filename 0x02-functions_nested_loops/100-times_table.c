#include "holberton.h"
/**
 *print_times_table - prints the n times table
 *
 *@n: number provided by the system for making the operation
 *Return: Zero
 */
void print_times_table(int n)
{
	int contan, contaf, m = 0;

		for (contan = 0; contan <= n; contan++)
		{
			for (contaf = 0; contaf <= n; contaf++)
			{
				m = n * contaf;
				_putchar(m);
				_putchar(',');
				_putchar(' ');
			}
		}
}
