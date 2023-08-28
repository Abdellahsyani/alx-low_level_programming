#include "lists.h"

/**
 * free_listint - free all listint
 * @head: The first node in list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
