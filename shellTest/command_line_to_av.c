#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	char *token;

	if (ac != 3)
	{
		exit(1);
	}

	token = strtok(av[1], av[2]);

	while (token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, av[2]);
		
	}
	return (0);
}
