#include "main.h"

/**
 * _pow_recursion - raised to the power
 * @x: number the raised
 * @y: number of power
 * Return: 0 (succesful)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else if (y == 1)
	{
		return (1);
	}
	else
	{
		return (x = _pow_recursion(x, y - 1));
	}
}
