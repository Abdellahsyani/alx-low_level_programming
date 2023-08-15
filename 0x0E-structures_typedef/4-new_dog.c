#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new function new_dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer if success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) * (len1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);

	new_dog->owner = malloc(strlen(owner) * (len2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);

	new_dog->age = age;


return (new_dog);
}
