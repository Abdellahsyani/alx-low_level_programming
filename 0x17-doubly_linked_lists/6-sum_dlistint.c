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

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
