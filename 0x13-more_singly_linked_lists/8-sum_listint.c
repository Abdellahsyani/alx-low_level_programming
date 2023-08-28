#include "lists.h"

/**
 * sum_listint - calculate the sum of all elements
 * @head: The first node in list
 *
 * Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
