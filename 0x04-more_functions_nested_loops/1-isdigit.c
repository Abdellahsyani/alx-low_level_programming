#include "main.h"

/**
 * _isdigit - print  number
 * @c: number digit
 * Return: 1 if c is digit, or 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
