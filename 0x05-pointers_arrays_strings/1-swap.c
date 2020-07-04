#include "holberton.h"
/**
 *swap_int - swaps the values of two integers
 *
 *@a: Integer no. 1
 *
 *@b: Integer no. 2
 *
 *Return: nule
 *
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
