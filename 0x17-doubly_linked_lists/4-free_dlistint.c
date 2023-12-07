#include "lists.h"

/**
 * free_dlistint - the function to free the list.
 * @head: the head to freed.
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
		free(head);
}
