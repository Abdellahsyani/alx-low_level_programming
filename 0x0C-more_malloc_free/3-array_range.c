#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - array of integers
 * @min: the first number in array
 * @max: the last number in array
 * Return: pointer if success
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
