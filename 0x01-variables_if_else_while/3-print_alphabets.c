#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase and uppercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
char ch = 'a';
char CH = 'A';
/*print a - z*/
while (ch <= 'z')
{
putchar(ch);
ch++;
}
/*print A - Z*/
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
