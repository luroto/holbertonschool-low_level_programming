#include "sort.h"

/**
 *swapping - Do swaps
 *@array: Given array
 *@size: Size of the array
 *@ai: First iterator
 *@aj: Second iterator
 * Return: 0 if sucessful
 */
int swapping(int *array, size_t size, size_t ai, size_t aj)
{
	size_t aux;

	aux = array[ai];
	array[ai] = array[aj];
	array[aj] = aux;
	print_array(array, size);
	return (0);
}
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *using Bubble sort algorithm
 *@array: Given array
 *@size: Size of the array
 * Return: Nothing, it's a void function
 */
void bubble_sort(int *array, size_t size)
{
	size_t ai = 0, aj = 1, pingu;

	if (array != NULL && size >= 2)
	{
		while (array[ai] != '\0')
		{
			if (array[ai] > array[aj] && aj != size)
			{
				swapping(array, size, ai, aj);
				if (size == 2)
				{
					break;
				}
				pingu = 1;
			}
			ai++;
			aj++;
		}
		if (ai == (size - 1) && size > 2)
		{
			pingu = 0;
		}
		if (pingu == 1)
		{
			bubble_sort(array, size);
		}
	}
}
