#include <stdio.h>
#include "holberton.h"
/**
 *clear_bit - Place an 1 on a given index
 *@n: source string
 *@index: position to be placed
 *Return: 1 if sucessful, -1 if failed.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & 1 << index;
		return (1);
	}
	return (-1);
}
