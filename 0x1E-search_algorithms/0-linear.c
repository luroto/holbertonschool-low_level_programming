#include <stdio.h>
/**
 *linear_search - Perfoms the searching of a value using
 *the linear search algorithm
 *@array: Array of integers to be checked
 *@size: Size of the array
 *@value: Value to be found
 *Return: index of the array which store the value to be found if that's
 *the case. If array is NULL or value is not found, return will be (-1)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		else
			return (i);
	}
	return (-1);
}
