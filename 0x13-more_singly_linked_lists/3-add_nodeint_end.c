#include "lists.h"

/**
 * add_nodeint_end - add new node to the end
 * @head: The first node in list
 * @n: The data of list
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *count;

	(void)count;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	count = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (count->next != NULL)
		{
			count = count->next;
		}

		count->next = new_node;
	}
	return (*head);
}
