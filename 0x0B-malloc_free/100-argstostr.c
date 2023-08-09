#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all arguments
 * @ac: The size of argument
 * @av: The value of string
 * Return: Always 0 successful
 */

char *argstostr(int ac, char **av)
{
	int i, j, h = 0, k = 0;
	char *arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	k += ac;

	arg = malloc(sizeof(char) * k + 1);

	if (arg == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[h] = av[i][k];
			h++;
		}
		if (arg[h] == '\0')
		{
			arg[h++] = '\n';
		}
	}
	return (arg);
}
