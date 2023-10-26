#include "main.h"

/**
 * binary_to_uint - conert binary to unsigned int.
 * @b: the binary who can I convert.
 *
 * Return: the result of converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	while (*b != NULL)
	{
		if (*b == '0')
		{
			result += result << 1;
		}
		else if (*b == '1')
		{
			result += (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}

