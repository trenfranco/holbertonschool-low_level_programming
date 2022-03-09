#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @argc: size arr
 * @argv: content
 * Return: int
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != 37 && argv[2][0] != 47 && argv[2][0] != 43 &&
	argv[2][0] != 45 && argv[2][0] != 42) || argv[2][1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
	printf("Error\n");
	exit(100);
	}

	i = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
	return (0);

}
