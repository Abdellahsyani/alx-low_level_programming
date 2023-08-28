#include "lists.h"

/**
 * pop_listint - delete the head node of list
 * @head: The head of list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int node_h;
	listint_t *h;
	listint_t *kali;

	if (*head == NULL)
		return (0);

	kali = *head;

	node_h = kali->n;

	h = kali->next;

	free(kali);

	*head = h;

	return (node_h);
}
