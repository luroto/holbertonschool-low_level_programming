#include <stdio.h>
#include "holberton.h"
/**
 *binary_to_unity - converts a string of binary into integers
 *@b: string source
 *Return: the product of the process
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lenb, suma = 0;

	if (!b)
	{
		return (0);
	}
	else
	{
		for (lenb = 0; b[lenb]; lenb++)
		{
			if (b[lenb] == '1')
			{
				suma = suma << 1 | 1;
			}
			else if (b[lenb] == '0')
			{
				suma = suma << 1;
			}
			else
			{
				return (0);
			}
		}
	}
	return (suma);
}
