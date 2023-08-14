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
}

/**
 *  dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
