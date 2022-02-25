#include<stdio.h>

/**
 * main - main
 *@argc: array agrv size
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);

	return (0);
}
