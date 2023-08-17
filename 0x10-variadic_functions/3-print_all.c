#include "variadic_functions.h"

/**
 * print_all - prints anything in this function
 * @format: print all thing
 */

void print_all(const char * const format, ...)
{
	va_list all;

	va_start(all, format);

	while (all != NULL)
	{
	char character = va_arg(all, char);
	int integer = va_arg(all, int);
	float floa = va_arg(all, float);
	char *str = va_arg(all, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
	printf("%c, %d, %f, %s", character, integer, floa, str);
	}
	printf("\n");
	va_end(all);

