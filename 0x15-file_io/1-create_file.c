#include "main.h"
#include <stdlib.h>
/**
 * create_file - creates a file.
 * @filename: pointer to name file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content[i] != '\0')
		i++;

	written = write(fd, text_content, i);

	close(fd);

	if (written != i)
		return (-1);
	return (1);
}
