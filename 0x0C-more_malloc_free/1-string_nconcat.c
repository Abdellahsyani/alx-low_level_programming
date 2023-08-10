#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count the length of string
 * @s: the string
 * Return: size the string
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
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
	int i, size1, size2;
	int *ptr;

	if (n >= size2)
	{
		_strlen(s2);
	}

	ptr = malloc(sizeof(char *) * (sizeof(int)));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; size1 + size2; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
		ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
