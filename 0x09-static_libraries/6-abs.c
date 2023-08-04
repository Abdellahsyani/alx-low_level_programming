#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to check.
 *
 * Return: The absoulut value of the integer.
 */

int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
