#include "main.h"

/**
 * square_dep - print two integer
 * @num: natural number
 * @i: power number
 * Return: 1
 */

int square_dep(int num, int i)
{
	if (num % (i * i))
	{
		return (1);
	}
	else
	{
		squre_dep(num, i + 1);
	}
}
/**
 * _sqrt_recursion - print natural square
 * @n: the square number
 * Return: 0 (succseful)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		j = square_dep(2);
		return (_sqrt_recursion(n / (j * j)));
	}
}
