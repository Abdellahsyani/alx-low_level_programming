#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the the struct
 * @d: pointer that print the struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n, Age: %.1f\n, Owner: %s\n", d->name, d->age, d->owner);
}
