#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

	char *bytptr = (unsigned char *)ptr;

	for (unsigned int i = 0; i < nmemb * size; i++)
	{
		bytptr[i] = 0;
	}
	return (ptr);
}
