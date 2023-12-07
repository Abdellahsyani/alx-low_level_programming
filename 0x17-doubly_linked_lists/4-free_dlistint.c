#include "lists.h"

/**
 * free_dlistint - the function to free the list.
 * @head: the head to freed.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
