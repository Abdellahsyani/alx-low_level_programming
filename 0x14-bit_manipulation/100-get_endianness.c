#include "main.h"

/**
 * get_endianness - the function who some thing like this.
 *
 * Return: the value of function in the end.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
