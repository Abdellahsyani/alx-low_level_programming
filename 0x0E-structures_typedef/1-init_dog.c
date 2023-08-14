#include <stdio.h>
#include "dog.h"

/**
 * struct dog - short description
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initialize the variable
 * @d: pointer to struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
 * main - entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	struct dog d;

	init_dog(&d, "Poppy", 3.5, "Bob");
return (0);
}
