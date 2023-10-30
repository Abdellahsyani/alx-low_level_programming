#include "main.h"

/**
 * read_textfile - the function who read text from the file
 * @filename: the name of the file.
 * @letters: the containtat of the file.
 *
 * Return: the value of the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re;
	ssize_t wr;
	ssize_t truncat;
	char *buff;

	truncat = open(filename, O_RDONLY);

	if (truncat == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);

	re = read(truncat, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	free(buff);
	close(truncat);
	return (wr);
}
