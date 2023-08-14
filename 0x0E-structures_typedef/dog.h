#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct - dog define a new type
 * @name: the first variable
 * @age: the seconde variable
 * @owner: the third variable
 * Return: dog
 */

struct dog{

	name = char*;
	age = float;
	owner = char*;
};

#endif /*DOG_H*/
