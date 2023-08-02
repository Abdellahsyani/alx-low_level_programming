#include "main.h"

/**
 * _strlen_recursion - print length the string.
 * @s: print the length of string.
 * Return: 0 (succesful)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
