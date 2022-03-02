#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

size1 = 0;
size2 = 0;
while (s1[size1] != '\0')
size1++;


while (s2[size2] != '\0')
size2++;


size = size1 + size2;

p = malloc((size + 1) * sizeof(char));

if (p == NULL)
	return (NULL);
j = 0;

for (i = 0; i < size1; i++)
	{
	p[j] = s1[i];
	j++;
	}
for (i = 0; i < size2; i++)
	{
	p[j] = s2[i];
	j++;
	}
p[j] = '\0';
return (p);


}
