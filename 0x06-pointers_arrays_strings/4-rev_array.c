#include "holberton.h"
/**
 *reverse_array - revers the content of an array of integers
 *
 *@a: source array
 *@n: number of bytes to be reversed
 *
 *Return : provided by the exercise
 */
void reverse_array(int *a, int n)
{
	int iterata,  iterante, temp;

	iterata = n - 1;
	for (iterante = 0 ; iterante < n / 2; iterante++)
	{
		temp = a[iterata];
		a[iterata] = a[iterante];
		a[iterante] = temp;
		iterata--;
	}
}
