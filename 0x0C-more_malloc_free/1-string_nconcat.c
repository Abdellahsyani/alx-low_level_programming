#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count the length of string
 * @s: the string
 * Return: size the string
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
		i++;


	return (i);
}

/**
 * string_nconcat - concatonate the two string
 * @s1: the first string
 * @s2: the second string
 * @n: the length of string
 * Return: pointer if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, size2;
	int *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= _strlen(s2))
		ptr = (char *)malloc(sizeof(_strlen(s1)) + _strlen(s2) + 2);
	if (n < _strlen(s2))
		ptr = (char *)malloc(sizeof(_strlen(s1)) + n + 2);

	if (ptr == NULL)
	{
		return (NULL);
	}
	size2 = _strlen(s1);
	if (1)
		for (i = 0; i < size2; i++)
			ptr[_strlen(s1) + i] = s2[i];

	ptr[_strlen(s1) + i] = '\0';

	return (ptr);
}
