#include "main.h"

/**
 * _strpbrk - mem
 * @s: puntero
 * @accept: char
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
int i, k = 0;

for (i = 0 ; s[i] != '\0' ; i++)
	{
	for (k = 0 ; accept[k] != '\0' ; k++)
		{
		if (s[i] == accept[k])
			{
			return (s + i);
			}
		}
	}
return ('\0');
}
