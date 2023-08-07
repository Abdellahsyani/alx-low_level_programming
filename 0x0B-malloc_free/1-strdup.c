#include "main.h"

/**
 * _strlen - print the strlen the string
 * @str: print the string
 * Return: len if successfuly
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * _strdup - entry point
 * @str: print the string
 * Return: Always 0 seccessful
 */

char *_strdup(char *str)
{
	char *dup;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dup = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
