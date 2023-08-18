#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - gets the operation
 * @s: operator
 *
 * Return: pointer to operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t var[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (var[i].op != NULL)
	{
		if (!strcmp(s, var[i].op))
		{
			return (var[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
