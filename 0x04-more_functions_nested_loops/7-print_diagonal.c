#include "main.h"

/**
 * print_diagonal - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a;
	int b;
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0 ; a < n ; a++)
	{
		for (b = a ; b > 0 ; b--)
		{
			_putchar (' ');
		}
		_putchar('\\');
		_putchar('\n');	
	}
	
}

