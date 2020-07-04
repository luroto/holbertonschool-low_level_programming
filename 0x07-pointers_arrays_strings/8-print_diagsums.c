#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - Calculates the sum of the two diagonals of a square matrix
 *of integers
 *@a: Casted array of arrays
 *@size: Size of each array
 *Return: It's a void function
 */
void print_diagsums(int *a, int size)
{

	int valuea = 0;
	int valueb = 0;
	int i = 0;
	int k = 0;

	for (k = 0; k < size  ; k++)
	{
		valuea += *(a + i + k);
		i += size;
		valueb += *(a + i - k - 1);
	}

	printf("%d, %d\n", valuea, valueb);
}
