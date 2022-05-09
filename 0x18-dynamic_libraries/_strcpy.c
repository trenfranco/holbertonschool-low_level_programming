#include "main.h"

/**
 ** _strcpy - copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
