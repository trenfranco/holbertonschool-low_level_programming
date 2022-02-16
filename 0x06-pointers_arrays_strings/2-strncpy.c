#include "main.h"

/**
 * _strncpy - check the code
 *@dest: dest
 *@src: src
 *@n: int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int z = 0;

for (i = 0 ; i < n ; i++)
	{
	if (src[i] == '\0')
	z = 1;

	if (z == 0)
	{
	dest[i] = src[i];
	}
	else
	{
	dest[i] = '\0';
	}
	}

return (dest);
}
