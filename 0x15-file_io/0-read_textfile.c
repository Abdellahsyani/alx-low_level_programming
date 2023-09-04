#include "main.h"

/**
 * read_textfile - reads a text and prints the value
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t Rd, Wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	Rd = read(fd, buf, letters);
	Wr = write(STDOIT_FILENO, buf, Rd);

	close(fd);

	free(buf);

	return (Wr);
