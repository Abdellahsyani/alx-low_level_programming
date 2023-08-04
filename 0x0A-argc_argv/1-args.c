#include "main.h"

/**
 * main - print number of argument
 * @argc: The argument count
 * @argv: The argument array
 * Return: Always  0 (success)
 */

int main(int argc, char *argv[])
{
	(void)*argv[];
	printf("argc = %d\n", argc - 1);

	return (0);
}
