#include "lists.h"

/**
 * add_node_end - function that add a new node at the end
 * @head: The first node in linked list
 * @str: The string to be stored
 *
 * Return: pointer if success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tem;
	size_t i;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	node->len = i;
	node->next = NULL;
	tem = *head;

	if (tem == NULL)
	{
		*head = node;
	}
	else
	{
		while (tem->next != NULL)
			tem = tem->next;
		tem->next = node;
	}

	return (*head);
}
