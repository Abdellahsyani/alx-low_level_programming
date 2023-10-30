#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - the function who read text from the file
 * @filename: the name of the file.
 * @letters: the containtat of the file.
 *
 * Return: the value of the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;


	if (filename == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);
	return (w);
}
