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
for (i = 0 ; i <= 99 ; i++)
{
for (o = 0 ; o <= 99; o++)
{
if (i != o && i < o)
{
putchar (i / 10 + '0');
putchar (i % 10 + '0');
putchar (' ');
putchar (o / 10 + '0');
putchar (o % 10 + '0');
if (i != 98)
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
