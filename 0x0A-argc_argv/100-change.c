#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - args
 *@argc: array agrv size
 *@argv: array
 *Return: int
 *
 */

int main(int argc, char *argv[])
{
int i = 0;
int x, size, res;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
        {

        size = strlen(argv[i]);
        for (x = 0; x < size ; x++)
                {
                if (isdigit(argv[i][x]) == 0)
                {
                printf("Error\n");
                return (1);
                }

                }
        res += atoi(argv[i]);

        }
printf("%d\n", res);
return (0);

}
