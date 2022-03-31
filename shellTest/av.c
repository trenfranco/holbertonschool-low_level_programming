#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char *H, *J, *K;
	int i;
	
	i = 0;
	while (av[i])
	{
		printf("Argument %i = %s\n", i, av[i]);
		i++;
	}
	return (0);
}
