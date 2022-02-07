#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i;
int x;
for (i = 0 ; i <= 23 ; i++)
{


for (x = 0 ; x <= 59 ; x++)
{
if (i < 10)
{
_putchar ('0');
} 
else
{
_putchar (i / 10 + '0');
}
_putchar (i % 10 + '0');
_putchar (':');
_putchar (x / 10 + '0');
_putchar (x % 10 + '0');
_putchar ('\n');
}
}
}


