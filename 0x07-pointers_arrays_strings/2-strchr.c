#include "main.h"

/**
 * _strchr - scann str
 * @s: char puntero
 * @c: char to scan
 * Return: s
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (*(s + i) != '\0')
	{
	if (*(s + i) == c)
		{
		return (s + i);
		}
	i++;
	}
return ('\0');
}
