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
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	temp = *head;
	while (index != 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
