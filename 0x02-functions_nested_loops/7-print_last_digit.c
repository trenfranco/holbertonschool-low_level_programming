#include "main.h"

/**
 * print_last_digit - Entry point
 * @a: int
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int a)
{

if (a < 0)
{
a = -a;
}
_putchar (a % 10 + '0');
return (a % 10 + '0');

}
