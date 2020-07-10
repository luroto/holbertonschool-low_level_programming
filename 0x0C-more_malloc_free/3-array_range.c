#include "holberton.h"
#include <stdlib.h>
/**
 **array_range - creates an array of integers
 *@min: first number
 *@max: second number
 *Return: The pointer to the array
 */
int *array_range(int min, int max)
{
	int *arrint, contador, carac;

	if (min > max)
	{
		return (NULL);
	}
	carac = min;
	arrint = malloc(sizeof(int) * ((max - min) + 1));
	if (arrint == NULL)
		return (NULL);
	for (contador = 0; contador <= (max - min); contador++)
	{
		arrint[contador] = carac;
		carac++;
	}
	return (arrint);
}
