#ifndef DOG_H
#define DOG_H


/**
 * struct dog - define a new type
 * @name: the first variable
 * @age: the seconde variable
 * @owner: the third variable
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
