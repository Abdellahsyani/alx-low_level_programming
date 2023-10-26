#include "main.h"

/**
 * binary_to_uint - conert binary to unsigned int.
 * @b: the binary who can I convert.
 *
 * Return: the result of converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;

	if (b == NULL)
	{
		return (0);
	}
	for ( ; *b != '\0'; b++)

	{
		if (*b == '0')
		{
			binary <<= 1;
		}
		else if (*b == '1')
		{
			binary = (binary << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (binary);
}
