#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big ending, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int y;
	char *s;

	y = 1;
	s = (char *) &y;

	return ((int)*s);
}
