#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of character
 * @size: count the size of character
 * @c: The value of character
 * Return: create_array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	*array = malloc(size sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		_putchar("%c");
	}
	free(array);
	return (array);
}
