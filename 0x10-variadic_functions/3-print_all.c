#include "variadic_functions.h"

/**
 * print_all - prints anything in this function
 * @format: print all thing
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	while (format != NULL)
	{
		if (*format == 'c')
		{
			char character = (char)va_arg(args, int);

			printf("%c", character);
		}
		else if (*format == 'i')
		{
			int integer = va_arg(args, int);

			printf("%d", integer);
		}
		else if (*format == 'f')
		{
			float floa = (float)va_arg(args, double);

			printf("%f", floa);
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);

			printf("%s", str);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		}
	}
	printf("\n");
	va_end(args);
}

