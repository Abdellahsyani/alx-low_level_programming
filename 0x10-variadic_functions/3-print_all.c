#include "variadic_functions.h"

/**
 * print_all - prints anything in this function
 * @format: print all thing
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *str;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
				printf("(nil)");
				break;
				}
				printf("%s", str);
				break;
			default:
			j = 0;
			break;
		}
		if (format[i + 1] && j)
		printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
