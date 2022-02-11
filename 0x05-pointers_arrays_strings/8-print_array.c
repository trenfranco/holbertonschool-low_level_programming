#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code for
 * @a: int
 * @n: int
 * Return: Always 0.
 */
void print_array(int *a, int n)
	{
	int i;

	for (i = 0 ; i < n ; i++)
		{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
		}
putchar('\n');
	}








/**
 * _strlen - check the code
 * @s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
int count;
char c;

c = *s;
count = 0;

while (c != '\0')
{
count++;
c = *(s + count);

}
return (count);
}
