#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file.
 * @text_content: the content of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
