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
if (0 <= n)
{
for (i = 0; i <= n; i++)
{
for (x = 0; x <= n; x++)
{
s = i * x;
if (s > 999)
{
_putchar(s / 1000 + '0');
}
else if (s > 99)
{
_putchar(s / 100 + '0');
}
else if (s > 9)
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
}
