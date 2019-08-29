#include <stdio.h>
#include "search_algos.h"
/**
 *binary_search - searchs in a array of sorted integers using the binary
 *search algorithm
 *@array: array of integers to be searched
 *@size: size of the array
 *@value:value to be found
 *Return: index if value is founded, -1 if array is null or not present on array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, ran, mita, paraar;

	ran = size - 1;

	if (array == NULL)
		return(-1);
	for (i = 0; i < size; i++)
	{
		printf("%lu Initializing\n", i);
		if (i > ran)
			return (-1);
		mita = ((i + ran)/ 2);
		paraar = i;
		printf("%lu paraar, %lu iterator\n", paraar, i);
		if (array[mita] < value)
			i = mita + 1;
		if (array [mita] > value)
			ran = mita - 1;
		printf ("%lu imprimiendo i, %lu imprimiendo ran, %lu imprimiendo mita\n", i, ran, mita);
		printf("Searching in array: ");
		while (paraar <= ran)
		{
			if (paraar < ran)
				printf("%i, ", array[paraar]);
			if (paraar == ran)
				printf("%i\n", array[paraar]);
			paraar++;
		}
		if (array[mita] == value)
			return(mita);
	}
	return(-1);
}
