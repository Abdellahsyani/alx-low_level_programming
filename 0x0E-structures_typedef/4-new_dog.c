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


	new_dog = malloc(sizeof(char));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strcpy(new_dog->name, name);
	new_dog->owner = strcpy(new_dog->owner, owner);
	new_dog->age = age;

	new_dog->name = malloc(sizeof(name));
	if (new_dog->name == NULL)
	{
		return (NULL);
		free(new_dog->name);
	}
	new_dog->owner = malloc(sizeof(owner));
	if (new_dog->owner == NULL)
	{
		return (NULL);
		free(new_dog->owner);
	}
	free(new_dog);
return (new_dog);
}
