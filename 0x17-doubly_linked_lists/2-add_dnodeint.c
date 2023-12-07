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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (*head != NULL)
	{
		new_node->next = *head;
		new_node->prev = new_node;
		*head = new_node;
		return (*head);
	}
	else{
		return (NULL);
	}
	return (*head);
}
