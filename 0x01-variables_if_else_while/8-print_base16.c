#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the number until 16
 *
 * Return: always 0 (success)
 */

int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
