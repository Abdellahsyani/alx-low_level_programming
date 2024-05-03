#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int ind, m, l, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	l = 0;
	prev = ind = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", ind, array[ind]);

		if (array[ind] == value)
			return (ind);
		l++;
		prev = ind;
		ind = l * m;
	} while (ind < (int)size && array[ind] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, ind);

	for (; prev <= ind && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
