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
	int *cpy1;
	int *cpy2;
	int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(sizeof(int) * (new_size);
		if (new_ptr == NULL)
		return (NULL);
	}

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size != old_size)
	{
	cpy1 = (int *)ptr;
	new_ptr = malloc(sizeof(int *) * new_size);
	if (new_size == NULL)
	{
	return (NULL);
	cpy2 = (int *)new_ptr;
	}
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			cpy2[i] = cpy1[i];
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			cpy2[i] = cpy1[i];
	}
		if (new_size == old_size)
			return (ptr);
		free(ptr);
		return (new_ptr);
}
