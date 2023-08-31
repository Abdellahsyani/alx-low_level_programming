#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 *
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if worked -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int md;

	if (index > 63)
		return (-1);

	md = 1 << index;
	*n = (*n | md);

	return (1);
}
