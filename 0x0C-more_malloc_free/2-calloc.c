#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array
 *@nmemb: elements of the array
 *@size: size of each array
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *c;

if (nmemb == 0 || size == 0)
	return (NULL);

c = malloc(nmemb * size * sizeof(char));
if (c == NULL)
	return (NULL);

for (i = 0; i < nmemb; i++)
	{
	i *= size;
	c[i] = 0;
	
	}
return (c);

}
