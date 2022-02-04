#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - 01
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i", n);
printf(" is positive\n");
}
if (n == 0)
{
printf("%i", n);
printf(" is zero\n");
}
if (n < 0)
{
printf("%i", n);
printf(" is negative\n");
}
return (0);
}
