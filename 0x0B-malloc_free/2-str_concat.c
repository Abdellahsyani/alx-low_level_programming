#include "main.h"

/**
 * _strlen - count the length of string
 * @str: the string
 * Return: len
 */
int _strlen(char *str)
{
	int len1 = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * str_concat - duplicate string to another string
 * @s1: the first string
 * @s2: the seconde string
 * Return: Always 0 successful
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, size;

	i = 0;
	j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = _strlen(s1) + _strlen(s2) + 1;

	s3 = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] == '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[size] = '\0';
	return (s3);
}
