#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - freeing all 2 dimensile
 * @grid: 2 dimensional grid
 * @height: height of grid
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
