#include "main.h"

/**
 * factorial - calculate the factorial of the gien number recurively
 * @n: The number whos factorial is calculated
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
