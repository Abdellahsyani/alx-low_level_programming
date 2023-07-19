#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - excutes a function given as a
 * parameter on element of an array.
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i:
		if (array && array)
			for (i = 0; i < size; i++)
				action(array[i]);
}
