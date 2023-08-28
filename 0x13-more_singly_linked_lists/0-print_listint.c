#include "lists.h"

/**
 * print_listint - prints all element in listint
 * @h: The pointer who has stored all elements
 *
 * Return: The number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t len, count = 0;

	while (h)
	{
		if (h != '\0')
			printf("%d", h->n);
			printf("%d", h->len);

		h = h->next;
		count++;
	}
	return (count);
}
