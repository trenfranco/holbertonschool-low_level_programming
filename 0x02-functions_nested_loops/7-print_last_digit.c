#include "main.h"

/**
 * print_last_digit - Entry point
 * @a: int
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int a)
{
int last = a % 10;
if (last < 0)
{
last *= (-1);
}
_putchar(last % 10 + '0');
return (last);

}
