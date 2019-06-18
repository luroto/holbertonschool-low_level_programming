#include "sort.h"

/**
 *swapping - Do swaps
 *@array: Given array
 *@size: Size of the array
 *@aj: Second iterator
 * Return: 0 if sucessful
 */
int swapping(int *array, size_t size, size_t aj)
{
	size_t aux;

	aux = array[aj];
	array[aj] = array[aj + 1];
	array[aj + 1] = aux;
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
	size_t ai, aj, pingu;

	if (array != NULL && size >= 2)
	{
		for (ai = 0; ai < (size - 1); ai++)
		{
			pingu = 0;
			for (aj = 0; aj < size - ai - 1; aj++)
			{
				if (array[aj] > array[aj + 1])
				{
					swapping(array, size, aj);
					pingu = 1;
				}
			}
			if (pingu == 0)
			{
				break;
			}
		}
	}
}
