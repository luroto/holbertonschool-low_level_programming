#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */
void free_grid(int **grid, int height)
{
	int itera1, itera2;

	/*if (*grid == NULL)
	{
		return;
		}*/
	for (itera1 = 0; itera1 < height; itera1++)
	{
		while (grid[itera2])
		{
			free (grid[itera1]);
			free (grid[itera2]);
			itera2++;
		}
	}
}
