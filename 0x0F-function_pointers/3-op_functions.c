#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - sum two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - moudulo two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
