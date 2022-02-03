#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charr;
int intt;
long int lint;
long long int llint;
float floatt;
printf("Size of a char: %ld byte(s)\n", sizeof(charr));
printf("Size of an int: %ld byte(s)\n", sizeof(intt));
printf("Size of a long int: %ld byte(s)\n", sizeof(lint));
printf("Size of a long long int: %ld byte(s)\n", sizeof(llint));
printf("Size of a float: %ld byte(s)\n", sizeof(floatt));
return (0);
}
