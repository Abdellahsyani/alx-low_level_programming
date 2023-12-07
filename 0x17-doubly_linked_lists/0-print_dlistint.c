#include "lists.h"

/**
 * print_dlistint - print all ellement in the list.
 * @h: the head of the list.
 *
 * Return: 0 if success 1 in fail.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ptr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ptr++;
	}
	return (ptr);
}
