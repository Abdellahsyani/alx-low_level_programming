#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: print a string follow by new ling.
 * Return: 0 (succesful)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
