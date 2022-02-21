#include "main.h"

/**
 * _memset - mem
 * @s: puntero
 * @b: char
 * @n: cant
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
	{
	*(s + i) = b;
	}

return (s);
}
