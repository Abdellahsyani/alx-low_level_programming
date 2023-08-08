#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count the size of  string
 * @str: string that sorted all string
 * Return: len
 */

char _strlen(char *str)
{
	int len;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * argstostr - function that concatenates all arguments
 * @ac: The size of argument
 * @av: The value of string
 * Return: Always 0 successful
 */

char *argstostr(int ac, char **av)
{
	int i, j, size;
	char *arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	size = _strlen(*av) + 1;

	arg = malloc(sizeof(int) * (sizeof(char)));
	if (arg == NULL)
	{
		return (NULL);
		free(arg);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < i; j++)
		{
			arg[i];
		}
		_putchar('\0');
	}
	return (0);
}
