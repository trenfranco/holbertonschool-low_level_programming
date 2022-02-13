#include <stdio.h>

/**
 * main - Entry point
 * @i: number
 * @a: num
 * @b: num
 * @c: int
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int a = 0;
int b = 0;
int c = 0;

for (i = 1024 ; i > 0 ; i--)
	{
	if (i % 3 != 1 && i != 1024)
	{
	a = a + i;
	}
	}

for (i = 1024 ; i > 0 ; i--)
	{
	if (i % 5 != 1 && i != 1024)
	{
	b = b + i;
	}
	}
c = b + a;
printf("%i", c);
printf("\n");

return (0);

}
