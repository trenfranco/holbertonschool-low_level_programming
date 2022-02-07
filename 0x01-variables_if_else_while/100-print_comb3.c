#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int o;
for (i = 0 ; i <= 9 ; i++)
{
for (o = 0 ; o <= 9; o++)
{
if (i != o && i < o)
{
putchar (i % 10 + '0');
putchar (o % 10 + '0');
if (i != 8)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
