#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: name of the file that's read
 * @letters: the number of letters read and printed
 *
 *Return: numbers of letters printed. If it fails, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	free(buf);

	return (wr);
}