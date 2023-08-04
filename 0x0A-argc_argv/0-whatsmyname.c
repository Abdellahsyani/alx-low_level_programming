#include "main.h"

/**
 * main - print name of argument
 * @argc: The argument count
 * @argv: The argument array
 * Return: always 0 success
 */

int main(int argc, int *argv[])
{
	if (argv > 0)
	{
		char *rename = argv[0];

		printf("%s\n", rename);
	return (0);
}
