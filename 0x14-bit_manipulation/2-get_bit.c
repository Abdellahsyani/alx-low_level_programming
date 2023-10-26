#include "main.h"

/**
 * get_bit - count the bit.
 * @n: the size of bit.
 * @index: the integer who do something.
 *
 * Return: value of index or -1 if an error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
