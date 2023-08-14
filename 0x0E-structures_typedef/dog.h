#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

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

#endif /*DOG_H*/
