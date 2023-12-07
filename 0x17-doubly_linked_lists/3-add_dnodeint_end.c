#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of list.
 * @head: the head of list.
 * @n: the new node to be add at list.
 *
 * Return: the adress if seccess and NULL if fail.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *zid = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (zid->next != NULL)
		zid = zid->next;
	new->prev = zid;
	zid->next = new;
	return (new);
}
