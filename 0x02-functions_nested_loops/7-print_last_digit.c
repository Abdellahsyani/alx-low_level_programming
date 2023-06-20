#include "main.h"

/**
 * main - entry piont
 * Description: print_last_digit_int - prints the lats digit of a number
 * @parametre
 * Return: Value of the last digit of number
 *
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
