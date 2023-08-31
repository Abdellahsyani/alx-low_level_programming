#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the h value of a bit at given index
 *
 * @n: unsigned long int input
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int build;

	if (index > 64)
		return (-1);

	build = n >> index;

	return (build & 1);
}
