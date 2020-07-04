#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array of integers
 *@size: size of the array
 *@cmp: function to be used
 *Return: -1 if non elements matches, contador for the index if mismatch
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int contador;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (contador = 0; contador < size; contador++)
		{
			(*cmp)(array[contador]);
			if ((*cmp)(array[contador]) != 0)
			{
			return (contador);
			}
		}
	}
	return (-1);
}
