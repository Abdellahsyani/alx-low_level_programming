#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: The array of function
 * @size: The size of array
 * @cmp: The pointer of integer
 *
 * Return: -1 fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
