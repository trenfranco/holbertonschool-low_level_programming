#include "main.h"

/**
 * print_line - check the code
 * @n: int
 * Return: Always 0.
 */
void print_line(int n)
{
int a;

for (a = 0 ; a <= n ; a++)
{
if (n <= 0)
{
_putchar ('\n');
}
_putchar ('_');
}
_putchar ('\n');
}
