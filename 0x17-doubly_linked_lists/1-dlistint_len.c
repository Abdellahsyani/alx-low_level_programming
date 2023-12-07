#include "lists.h"

/**
 * dlistint_len - count the number of element in list.
 * @h: the head of list.
 *
 * Return: 0 for success 1 in fail.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
