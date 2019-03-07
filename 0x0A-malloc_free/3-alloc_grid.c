#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
***alloc_grid - creates a bidimensional array
 *
 *@width: width of the array
 *@height: height of the array
 *Return: a pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **stri, itera1, itera2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	stri = malloc(sizeof(int *) * height);
		if (stri == 0)
		{
			return (NULL);
		}
	for (itera1 = 0; itera1 < width; itera1++)
	{
		stri[itera1] = malloc(sizeof(int) * width);
		if (*(stri + itera1) == NULL)
		{
			for (; itera1 >= 0; itera1--)
			{
				free(stri[itera1]);
			}
			free(stri);
			return (NULL);
		}
		for (itera2 = 0; itera2 < height; itera2++)
		{
			stri[itera1][itera2] = 0;
		}
	}
	return (stri);
}
