#include "lists.h"

/**
 * sum_dlistint - the function for sum.
 * @head: the head of list .
 *
 * Return: sum of number..
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *add = head;

	while (add != NULL && add->next != NULL)
	{
		add = add->next;
		sum += add->n;
	}
	return (sum);
}
