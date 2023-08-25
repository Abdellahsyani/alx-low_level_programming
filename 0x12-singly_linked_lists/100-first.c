#include <stdio.h>

/**
 * main - print a string befor main
 *
 * description: Print a function befor main function
 */

void __attribute__((constructor)) main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
