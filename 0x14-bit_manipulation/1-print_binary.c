#include "main.h"

/**
 * print_binary - print binary in the output.
 * @n: the number who returned to binray.
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int max = 1 << 31;

	for (int i = 31; i >= 0; i--)
	{
		if ((n & max) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		_putchar("\n");
	}
}
