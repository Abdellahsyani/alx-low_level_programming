#include "main.h"

/**
 * clear_bit - the function who clear the bit ffrom the index.
 * @n: the number who present the bit.
 * @index: the value who sored index bit.
 *
 * Return: 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
