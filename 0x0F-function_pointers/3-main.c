#include "3-calc.h"

/**
 * main - calls the get op function
 * @argc: The count of function
 * @argv: The value of function
 *
 * Return: exit with 98 for incorrect
 */

int main(int argc, char **argv)
{
	int a, b, result;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	result = get_op_func(s)(a, b);

	printf("%d\n", result);

return (0);
}
