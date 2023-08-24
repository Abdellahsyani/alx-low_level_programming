#include "lists.h"

/**
 * free_list - free the list_t list
 * @head: head of the linked list
 *
 */

void free_list(list_t *head)
{
	list_t *free_d;

	while (head != NULL)
	{
		free_d = head;
		head = head->next;
		free(free_d->str);
		free(free_d);
	}
}
