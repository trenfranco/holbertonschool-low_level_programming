#include<stdio.h>
#include<stdlib.h>

/**
 * main - main
 *@argc: array agrv size
 *@argv: array
 *
 */

int main(int argc, char *argv[])
{
int x, i, y, res = 0;

for (i = 0; i < argc; i++)
{}
if (i < 3)
{
printf("Error\n");
return(1);
}

x = atoi(argv[1]);
y = atoi(argv[2]);
res = x * y;
printf("%d\n", res);
return(0);
}
