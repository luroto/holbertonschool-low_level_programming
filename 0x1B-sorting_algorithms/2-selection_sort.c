#include "sort.h"

/**
 * selection_sort - An implementation of the algorithm
 *@array: Given array
 *@size: The size of that array
 */
void selection_sort(int *array, size_t size)
{
	size_t ai, aj, minind, pingu, aux;

	if (array != NULL && size >= 2)
	{
		for (ai = 0; ai < (size - 1); ai++)
		{
			minind = ai;
			pingu = 0;
			for (aj = ai + 1; aj < size; aj++)
			{
				if (array[aj] < array[minind])
				{
					minind = aj;
					pingu = 1;
				}
			}
			if (pingu == 1)
			{
				aux = array[ai];
				array[ai] = array[minind];
				array[minind] = aux;
				print_array(array, size);
			}
		}
	}
}
