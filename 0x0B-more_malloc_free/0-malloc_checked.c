#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **malloc_checked - allocates memory
 *
 *@b: it collects the main input info
 *
 *Return: It returns the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(sizeof(b));
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
