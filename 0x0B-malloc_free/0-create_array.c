#include "main.h"
#include <stdlib.h>

/**
 * *create_array - print char and initializes it with a specific char
 * @c: input char
 * @size: input unisgned int
 * Return: 0 if size = 0 and NULL if set = NULL
 */

char *create_array(unsigned int size, char c)
{
	char *set;

	unisgned int i;

	char *set = malloc(sizeof(char) * size);

	if (size == 0 || set == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		set[i] = c;
	return (set);
