#include "lists.h"

/**
 * get_nodeint_at_index - raturns the nth node of list
 * @head: The first node in list
 * @index: index of node
 *
 * Return: nth node. if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
