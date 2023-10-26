#include "main.h"

/**
 * set_bit - the function who set the bytes.
 * @n: the number who present the bit.
 * @index: the index of the set.
 *
 * Return: 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;

	if (index > sizeof(unsigned long  int) * 8 - 1)
		return (-1);

	max = 1 << index;
	*n = *n | max;

	return (1);
}
