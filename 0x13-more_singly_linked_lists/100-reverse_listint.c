#include "lists.h"

/**
 * revers_listint - reverse a linked list
 * @head: head of a list.
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *q;
	listint_t *p;

	q = NULL;
	p = NULL;

	while (*head != NULL)
	{
		p = (*head)->next;
		(*head)->next = q;
		q = *head;
		*head = n;
	}
	*head = q;
	return (*head);
}
