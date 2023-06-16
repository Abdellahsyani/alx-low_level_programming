#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
