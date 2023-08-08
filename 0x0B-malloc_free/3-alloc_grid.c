#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - print the grid of number
 * @width: The width of grid number
 * @height: The height of grid number
 *
 * Return: Always 0 successfuly
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
		if (grid == NULL)

			return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j < i; j++)
				free(grid[j]);
				return (NULL);
		}
	}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
}
