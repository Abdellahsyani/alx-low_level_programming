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
	if (node == NULL)
		return (NULL);

	while (str == NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
	}
return (node);
}
