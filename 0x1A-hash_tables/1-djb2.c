#inlude "hash_tables.h"

/**
 * hash_djb2 - the function hashing to implementing the djbd.
 * @str: the string to hash.
 *
 * Return: The calculate hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
