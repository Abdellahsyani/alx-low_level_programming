#include "lists.h"

/**
 * insert_dnodeint_at_index - inset a nenode at possition.
 * @h: the head of list.
 * @idx: the psoition to be insert newN.
 * @n: the data to be inserted.
 *
 * Return: The adress of newN if seccess or NULL if fail.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newN;
	dlistint_t *tem = NULL;
	unsigned int current = 0;

	newN = malloc(sizeof(dlistint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	if (idx == 0)
	{
		newN->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newN;
		}
		*h = newN;
		return (newN);
	}
	tem = *h;

	while (tem != NULL && current < idx)
	{
		tem = tem->next;
		current++;
	}
	if (tem == NULL && current != idx)
	{
		free(newN);
		return (*h);
	}
	newN->prev = tem;
	newN->next = tem;
	if (tem->prev != NULL)
	{
		tem->prev->next = newN;
	}
	tem->prev = newN;

	return (newN);
}

