#include "lists.h"

/**
 * free_listint2 - free elements
 * @head: The first node in list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *kali;

	if (head != NULL)
	{
		kali = *head;
		while ((temp = kali) != NULL)
		{
			kali = kali->next;
			free(temp);
		}
		*head = NULL;
	}
}
