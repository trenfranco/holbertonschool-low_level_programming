#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to newly allocated space in mem,
 *  contains a copy of given str
 *
 *@str: char
 *
 * Return: Pointer to arr.
 */
char *_strdup(char *str)
{
char *c;
int i, j = 0;

while (str[j] != '\0')
	{
	j++;
	}

c = malloc(j * sizeof(char) + 1);

if (c == NULL || str == NULL)
return (NULL);

for (i = 0; i < j; i++)
	{
	c[i] = str[i];
	}

return (c);
}
