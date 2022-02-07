#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;
char ch[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0 ; i <= 25 ; i++)
{
_putchar (ch[i]);
}
_putchar ('\n');
}
