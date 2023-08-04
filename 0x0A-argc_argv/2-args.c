#include "main.h"

/**
 * main - print all string who enterd
 * @argc: The size of argument
 * @argv: The argument array
 * Return: Always 0 seccess
 */

int main(int argc, int *argv[])
{
	int o;

	for (o = 0; o < argc; o++)
	{
		printf("%s\n", argv[o]);
	}

	return (0);
}
