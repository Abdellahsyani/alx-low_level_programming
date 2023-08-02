#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse.
 * @s: print a string in reverce.
 * Return: 0 (succesful)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
