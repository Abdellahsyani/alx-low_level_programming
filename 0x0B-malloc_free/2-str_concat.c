#include "main.h"

/**
 * str_concat - duplicate string to another string
 * @s1: the first string
 * @s2: the seconde string
 * Return: Always 0 successful
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, size;

	if (s1 == NULL && s2 == NULL)
	{
		return ('\0');
	}

	s3 = malloc(sizeof(s1, s2) * char);

	for (i = 0; i < size; i++)
	{
		s3 = s1 + s2;
	}
	return (s3);
}
