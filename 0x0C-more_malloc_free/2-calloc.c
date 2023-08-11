#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates the memeroy for array
 * @nmemb: The array
 * @size: size of array
 * Return: pointer if success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	memset(ptr, 0, nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
