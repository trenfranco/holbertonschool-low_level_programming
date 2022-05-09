#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: first string
 * @src: second string
 * @n: numbers of bytes from src
 * Return: a copy of the string srr (until n)
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i, a;

	i = 0;
	a = 0;

	while (src[i])
	{
		i++;
	}
	if (i >= n)
	{
		for (a = 0; a < n; a++)
		{
			dest[a] = src[a];
		}
	}
	else
	{
		for (a = 0; a < i; a++)
		{
			dest[a] = src[a];
		}
		for (a = i; a < n; a++)
		{
			dest[a] = '\0';
		}
	}
	return (dest);
}
