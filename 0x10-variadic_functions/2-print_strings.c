#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: The pointer to string
 * @n: the variable who print the string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
		if (separator == NULL)
		{
			printf("(nil)");
		}
		printf("%d", s);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
