#include "variadic_functions.h"

/**
 * sum_them_all - The sum of all its parametrs
 * @n: The integer who want to sum
 * Return: The sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, j;
	int sum = 0;

	va_start(arg, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		j = va_arg(arg, unsigned int);
		sum += j;
	}
	va_end(arg);
return (sum);
}
