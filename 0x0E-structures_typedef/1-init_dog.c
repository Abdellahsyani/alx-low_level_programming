#include <stdio.h>

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
	struct dog *d;

	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";

	printf("%s, %.1f, %s\n", d->name, d->age, d->owner);
}
