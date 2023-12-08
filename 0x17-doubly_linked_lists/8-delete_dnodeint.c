#include "lists.h"

/**
 * delete_dnodeint_at_index - the function to delete node.
 * @head: the head of function.
 * @index: ths value to be delete.
 * Return: 1 if success or -1 if fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	
	if (*head == NULL)
		return (-1);
	while (index > 0 && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		index++;
	}
	if (index > 0)
		return (-1);
	*head = NULL;

	return (1);
}
