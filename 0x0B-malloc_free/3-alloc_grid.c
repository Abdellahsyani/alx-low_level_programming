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
	int i, j, size;
	int *grid;

	if (alloc_grid == '\0')
	{
		return (NULL);
	}
if (width < 1 || height < 1)
{
	return (NULL);
}

	grid = malloc(sizeof(width) * (sizeof(height)));

	for (i = 1; i < width; i++)
	{
		for (j = 1; j < height; j++)
		{
			printf("0");
		}
	}
	free(grid);

return (0);
}
