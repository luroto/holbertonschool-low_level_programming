#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *using Bubble sort algorithm
 *@array: Given array
 *@size: Size of the array
 * Return: Nothing, it's a void function
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, posi = 0 , j, posj, itera;
	for (itera = 0; itera <= size, itera++)
	{
		for (posi = 0; posi < size; posi++)
		{
			for (posj = 1; posj < size; posj++)
			{
				if (array[posi] > array[posj])
				{
					swapping(array, posi, posj);
				}
			}
		}
	}
}
