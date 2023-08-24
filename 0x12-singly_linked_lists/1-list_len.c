#include "lists.h"

/**
 * list_len - function that print length of string
 * @h: The value of string
 *
 * Return: The integer value
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("%d element", h->len);
		}
		count++;
	}
	return (count);
}
