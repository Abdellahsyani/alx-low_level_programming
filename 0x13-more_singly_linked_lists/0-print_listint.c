#include "lists.h"

/**
 * print_listint - prints all element in listint
 * @h: The pointer who has stored all elements
 *
 * Return: The number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
