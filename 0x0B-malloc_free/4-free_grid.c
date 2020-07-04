#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees an array
 *
 *@grid: points to an array of chars
 *@height: indicates the number of rows in the array
 *Return: provided by the exercise
 */
void free_grid(int **grid, int height)
{
	int itera1;

	if (grid == NULL)
	{
		return;
	}
	if (height == 0)
	{
		return;
	}
	for (itera1 = 0; itera1 < height; itera1++)
	{
		free(grid[itera1]);
	}
	free(grid);
}
