#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - print length the string.
 * @s: print the length of string.
 * Return: 0 (succesful)
 */

int _strlen_recursion(char *s)
{
	int length;
	if (*s)
	{
		_strlen_recursion(s + 1);
		length = _strlen_recursion(s);
	}
	else 
	{
		_putchar(*s);
	}
		return (length);
}
