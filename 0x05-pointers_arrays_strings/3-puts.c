#include "main.h"

/**
 * _puts - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;
	char a = *str;

	while (a != '\0')
	{
		a = str[i];
		_putchar(a);
		i++;
	}

	_putchar('\n');



}
