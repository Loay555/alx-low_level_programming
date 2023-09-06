#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Frees 2d array
 *@grid: 2d grid
 *@height: height dimension of grid
 *Description: frees memory of grid
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);

}
