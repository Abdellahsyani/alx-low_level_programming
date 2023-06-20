#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
