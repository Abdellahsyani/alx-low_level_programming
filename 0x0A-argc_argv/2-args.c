#include "main.h"

/**
 * main - print all string who enterd
 * @argc: The size of argument
 * @argv: The argument array
 * Return: Always 0 seccess
 */

int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
			printf("%s\n", argv[i]);
	}
	return (0);
}
