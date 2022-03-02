#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *@s2: string 2
 *@s1: string 1
 *
 * Return: Pointer to arr.
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2, size, i, j = 0;
char *p;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";


while (s1[size1] != '\0')
size1++;
size1 -= 1;

while (s2[size2] != '\0')
size2++;
size2 -= 1;

size = size1 + size2;

p = malloc(size * sizeof(char) + 1);

if (p == NULL)
	return (NULL);

for (i = 0; i < size1; i++)
	{
	p[j] = s1[i];
	j++; 
	}
for (i = 0; i < size2; i++)
	{
	p[j] = s2[i];
	}
p[j] = '\0';
return (p);


}
