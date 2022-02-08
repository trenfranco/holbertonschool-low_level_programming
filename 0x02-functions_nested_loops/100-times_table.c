#include "main.h"
/**
 * print_times_table - dasd
 * @n: das
 */
void print_times_table(int n)
{
int i;
int x;
int s;
if (n < 1)
n = -n;
for (i = 0; i <= n; i++)
{
for (x = 0; x <= n; x++)
{
s = i * x;
if (s > 9)
_putchar(s / 10 + '0');
_putchar(s % 10 + '0');
if (x != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
