#include "main.h"

/**
 * append_text_to_file - appends text at the end of a  file
 * @filename: filename.
 * @text_content: added content
 *
 * Return: 1 if the file exists, -1 if the fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filenme, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
