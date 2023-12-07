#include "lists.h"

/**
 * get_dnodeint_at_index - the index function.
 * @head: the head of the list.
 * @index: the index of value in list.
 *
 * Return: 0 if success 1 if fail.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;
	unsigned int target = 0;

	h = head;
	if (head != NULL)
	{
		while (h != NULL && target < index)
		{
			h = h->next;
			target++;
		}
		if (target == index)
			return (h);
		else
			return (NULL);
	}
	return (h);
}
