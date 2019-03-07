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
	int itera1, itera2;

	if (*grid == NULL || *grid == 0)
	{
		free(grid);
		return;
	}
	for (itera1 = 0; itera1 < height; itera1++)
	{
		for (itera2 = 0; grid[itera2]; itera2++)
		{
			free(grid[itera2]);
		}
	}
	free(grid[itera1]);
	free(grid);
}
