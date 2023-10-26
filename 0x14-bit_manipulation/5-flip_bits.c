#include "main.h"

/**
 * flip_bits - the function who cann do any thinng you want.
 * @n: the number n is number n.
 * @m: the m number is also the number m.
 *
 * Return: count if succeces.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int buf;
	int count;

	buf = n ^ m;
	count = 0;

	while (buf)
	{
		count++;
		buf &= (buf - 1);
	}
	return (count);
}
