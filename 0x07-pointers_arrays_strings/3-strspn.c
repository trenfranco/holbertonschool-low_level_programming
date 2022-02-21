#include "main.h"

/**
 * _memset - mem
 * @s: puntero
 * @b: char
 * @n: cant
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int k = 0;

while (*(s + i) != '\0')
	{
	while (*(accept + k) != '\0')
		{
		if (*(s + i) == *(accept + k))
			{
			j++;
			}
		k++;
		}
	i++;
	}

return (j);

}
