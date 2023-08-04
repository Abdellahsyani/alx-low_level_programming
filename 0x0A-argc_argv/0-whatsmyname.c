#include "main.h"

/**
 * main - print name of argument
 * @argc: The argument count
 * @argv: The argument array
 * Return: always 0 success
 */

int main(int argc, int *argv[])
{
	(void)argc;
	if (argv > 0)
	{
		char *ar_name = argv[0];
	printf("%s\n", ar_name);
	}
	return (0);
}
