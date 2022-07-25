#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append text to
 * @text_content: the text to append with NULL termination
 * Return: 1 on success, -1 on failure, -1 if @filename is NULL, 1 if file
 * exists, -1 if file doesn't exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nlet;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;

		rwr = write(fd, text_content, nlet);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
