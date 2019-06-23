#include "sort.h"
/**
 * swapping - Do swaps
 *@array: Given array
 *@size: Size of the array
 *@ai: First iterator
 *@minind: second iterator, contains the minimum
 *Return: 0 if sucessful
 */
int swapping(int *array, size_t size, size_t ai, size_t minind)
{
	size_t aux;

	aux = array[ai];
	array[ai] = array[minind];
	array[minind] = aux;
	print_array(array, size);
	return (0);
}
/**
 *selection_sort - An implementation of this algorithm
 *@array: Given array
 *@size: The size of that array
 */
void selection_sort(int *array, size_t size)
{
	size_t ai, aj, minind;

	for (ai = 0; ai < (size - 1); ai++)
	{
		minind = ai;
		for (aj = ai + 1; aj < size; aj++)
		{
			if (array[aj] < array[minind])
			{
				minind = aj;
			}
		}
		swapping(array, size, ai, minind);
	}
}
