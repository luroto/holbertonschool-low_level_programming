#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_calloc - allocates memory for an array using malloc
 *@nmemb: number of elements in the array
 *@size: size on bytes
 *Return: the pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memall;
	unsigned int contador;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memall = malloc(size * nmemb);
	if (memall == NULL)
		return (NULL);
	for (contador = 0; contador < (size * nmemb); contador++)
	{
		memall[contador] = 0;
	}
	return (memall);
}
