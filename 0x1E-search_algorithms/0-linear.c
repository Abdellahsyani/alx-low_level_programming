#include "search_algos.h"

/**
 * linear_search - function that search for the right value
 * @array: the array that contains the values
 * @size: the size of the array
 * @value: the value that we are looking for
 *
 * Return: -1 if fails and value if success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
