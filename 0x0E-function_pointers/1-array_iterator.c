#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - executes a function given as a parameter on each element of
 *an array
 *@array: pointer to an array
 *@size: number of elements in bytes
 *@action: function to be used
 *Return: it is a void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i, total = size;

	if (array != NULL)
	{
		for (i = 0; i < total; i++)
		{
			(*action)(array[i]);
		}
	}
}
