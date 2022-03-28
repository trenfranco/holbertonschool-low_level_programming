#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@letters: size
 *@filename: filename
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, written, r;
	char *buff;

	buff = malloc(letters);

	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);

	if (r == -1)
		return (0);

	written = write(STDOUT_FILENO, buff, r);

	if (written != r)
		return (0);
	close(fd);
	return (written);
}
