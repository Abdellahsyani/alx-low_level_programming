#include "main.h"

/**
 * factorial - calculate the factorial of the gien number recurively
 * @n: The number whos factorial is calculated
 *
 * Retunr: error is -1, respective value of the factorial
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
