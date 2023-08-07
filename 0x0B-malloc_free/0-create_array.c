#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of character
 * @size: count the size of character
 * @c: The value of character
 * Return: create_array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *create_array = (char *)malloc(size * sizeof(char));

	if (create_array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
	return (create_array);
}
/**
 * main - entry point
 * Description: create an array of character
 * Return: Always 0 if successful
 */

int main(void)
{
	unsigned int size = 5;
	char character = 'H';

	char *array = create_array(size, character);

	if (array != NULL)
	{
		_putchar("array is created.");
		for (unsigned int i = 0; i < size; i++)
		{
			_putchar("%c ", array[i]);
		}
		free(array);
	}
		else
		{
			_putchar("array is failed.");
		}
		return (0);
}
