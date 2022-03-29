#include <stdio.h>
#include "main.h"

void funcclose(int a);
/**
 * main - main
 * @argc: cty of args
 * @argv: matrix of args
 * Return: nothing
 */


int main(int argc, char **argv)
{
	int fdt, fdf, sizef;
	char *file_from, *file_to, *buffer;

	buffer = malloc(1024);
	if (!buffer)
		return (-1);

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdt = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR
		| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	fdf = open(file_from, O_RDONLY);

	if (fdf == -1)
	{
		funcclose(fdt);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	sizef = 1024;
	for (; sizef == 1024;)
	{
		sizef = read(fdf, buffer, 1024);

		if (sizef == -1)
		{
			funcclose(fdf);
			funcclose(fdt);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		if (write(fdt, buffer, sizef) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	funcclose(fdf);
	funcclose(fdt);
	return (0);
}
/**
 * funcclose - close and if-1 prints err
 * @a: fd
 * Return: nothing
 */
void funcclose(int a)
{
	if (close(a) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", a);
		exit(100);
	}

}
