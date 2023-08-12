#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - copy the contains from old to new
 * @ptr: pointer to save the address of memory
 * @old_size: the old size to be copied
 * @new_size: the new size to be intialized
 * Return: no return value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;
	int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	unsigned int copy_size = old_size < new_size ? old_size : new_size;

	unsigned char *cpy1 = (unsigned char *)ptr;
	unsigned char *cpy2 = (unsigned char *)new_ptr;

	for (i = 0; i < copy_size; i++)
	{
		cpy2[i] = cpy1[i];
	}
	free(ptr);
}
