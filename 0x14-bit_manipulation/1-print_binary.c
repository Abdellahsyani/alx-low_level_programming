#include "main.h"

/**
 * print_binary - print binary in the output.
 * @n: the number who returned to binray.
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
