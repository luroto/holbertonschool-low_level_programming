#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees an array
 *
 *@grid: points to an array of chars
 *@height: indicates the number of rows in the array
 *
 */
void free_grid(int **grid, int height)
{
	int itera1, itera2;

	if (*grid == NULL)
	{
		return;
	}
	for (itera1 = 0; itera1 < height; itera1++)
	{
		while (grid[itera2])
		{
			free(grid[itera1]);
			free(grid[itera2]);
			itera2++;
		}
	}
}
