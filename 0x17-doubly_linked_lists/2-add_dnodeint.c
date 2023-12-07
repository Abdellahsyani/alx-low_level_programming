#include "lists.h"

/**
 * add_dnodeint - add new node to begin of list.
 * @head: the head of list.
 * @n: the node to be add it at list.
 *
 * Return: the address of node if success NULL if it fail.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *iwr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	iwr = *head;
	if (iwr != NULL)
	{
		while (iwr->prev != NULL)
			iwr = iwr->prev;
	}
	new_node->next = iwr;
	if (iwr != NULL)
		iwr->prev = new_node;
	*head = new_node;
	return (new_node);
}
