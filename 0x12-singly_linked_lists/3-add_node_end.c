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
	list_t *node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	if (head == NULL)
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = *head;
		*head = node;

	return (*head);
}
