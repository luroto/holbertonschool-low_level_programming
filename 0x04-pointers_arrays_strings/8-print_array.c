#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array
 *
 *@a: stores integers
 *@n: number of elements
 *
 *Return: provided by exercise
 */
void print_array(int *a, int n)
{
	int l = 0;

		while (l < n)
		{
			printf("%d", a[l]);
			if (l < n - 1)
			{
			printf(",");
			printf(" ");
			}
			l++;
		}
		printf("\n");
}
