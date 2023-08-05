#include "main.h"

/**
 * main - print multiple two number
 * @argc: The size of an argument
 * @argv: The argument array
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error!\n");
		return (1);
	}
	else
	{
		int mul, num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("\n%d", mul);
	}
}
