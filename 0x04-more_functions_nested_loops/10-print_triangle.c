#include "main.h"

/**
 * print_triangle - check the code
 * @size: trsinglr size
 * Return: Always 0.
 */
void print_triangle(int size)
{
int a;
int b;

for (a = 1 ; a <= size ; a++)
	{
	for (b = a ; b <= size - 1 ; b++)
		{
		_putchar (' ');
		}
	for (b = 1 ; b <= a; b++)
		{
		_putchar ('#');
		}
	_putchar ('\n');
	}

}
