#include "hash_tables.h"

/**
 * key_index - the function to get index at which a key or value.
 * @key: the key to the hash.
 * @size: the size the list hashing.
 *
 * Return:  The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}
