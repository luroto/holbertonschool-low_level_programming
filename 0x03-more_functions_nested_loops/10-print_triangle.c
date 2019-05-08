#include "holberton.h"
#include <stdio.h>
/**
 *print_triangle - Print a triangle using a given size.
 *@size: Size of the triangle
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y > 0; y--)
			{
				if (y > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			if (x < size)
			{
				_putchar('\n');
			}
		}
	}
}
