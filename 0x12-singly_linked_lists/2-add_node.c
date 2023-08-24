#include "lists.h"

/**
 * add_node - Function that adds the new node
 * @head: The first node in function
 * @str: The string in node
 *
 * Return: pointer value
 *
 * ab: abdellah
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (*head);
}
