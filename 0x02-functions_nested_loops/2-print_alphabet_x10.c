#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int x;
	char ch[] = "abcdefghijklmnopqrstuvwxyz";

	for (x = 0 ; x <= 10 ; x++)
	{
	for (i = 0 ; i <= 25 ; i++)
	{
		_putchar (ch[i]);
	}
	_putchar ('\n');
	}
}
