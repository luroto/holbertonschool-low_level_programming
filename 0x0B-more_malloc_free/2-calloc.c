#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *memall, contador;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memall = malloc(size * nmemb);
	if (memall == NULL)
		return (NULL);
	return (memall);
	for (contador = 0; contador <= nmemb; contador++)
	{
		memall[contador] = 0;
	}
}
