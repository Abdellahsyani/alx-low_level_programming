#include "lists.h"

/**
 * listint_len - returns number of element
 * @h: The pointer who has an element
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
