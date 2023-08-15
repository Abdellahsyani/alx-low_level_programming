#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: free pointer
 */

void free_dog(dog_t *d)
{
	free(name);
	free(owner);
	free(new_dog);
}
