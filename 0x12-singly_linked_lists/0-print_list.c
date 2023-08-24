#include "lists.h"


/**
 * print_list - print all element of list_t
 * @h: The string who take the value
 *
 * Return: The length of value
 * writer: abdellahsyani;
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
return (count);
}
