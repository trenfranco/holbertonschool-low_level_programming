#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char and initalizates it
 *@size: size
 *@c: char
 *
 * Return: Pointer to arr.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *juanito;

juanito = malloc(size * sizeof(char));

if (size == 0 || juanito == NULL)
return (NULL);


for (i = 0; i < size; i++)
	{
	juanito[i] = c;
	}

return (juanito);
}
