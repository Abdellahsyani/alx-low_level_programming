#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer that print struct dog
 * Return: No return value
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("%s\n", d->name);
	printf("%.1f\n", d->age);
	printf("%s\n", d->owner);

	if (name == NULL)
	{
		return (nil);
	}
}

/**
 * main - entry point
 * Description: long struct description
 * Return: Always 0 success
 */
int main(void)
{
	struct dog d = {"Poppy", 3.5, "Bob"};

	struct * Mydog = &d;

	print_dog(Mydog);

return (0);
}
