#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name of function
 * @f: is a pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
