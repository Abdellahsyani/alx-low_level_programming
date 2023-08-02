#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - print length the string.
 * @s: print the length of string.
 * Return: 0 (succesful)
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		_putchar(strlen(*s));
	}
}
