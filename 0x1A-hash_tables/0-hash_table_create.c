#include "hash_tables.h"

/**
 * hash_table_create - the function to create a new list for hashing.
 * @size: The size of array or list to be created.
 *
 * Return: pointer to the new hash if seccess if not NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned long int i;

	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);

	head->size = size;
	head->array = malloc(sizeof(hash_node_t *) * size);
	if (head->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		head->array[i] = NULL;

	return (head);
}
