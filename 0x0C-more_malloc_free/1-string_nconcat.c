#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *@s1: str 1
 *@s2: str 2
 *@n: int, first bytes of s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sum, k ,l;
	char *p;

	i = 0;
	j = 0;
	k = 0;

	if (s1 == NULL)
                s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n >= j)
		{
		sum = j + i;
		}
	else if (n < j)
	{
	sum = n + i;
	}

	p = malloc(sum * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);
	l = 0;
	for (k = 0; k < i; k++)
		{
		p[l] = s1[k];
		l++;
		}
	for (k = 0; k < n; k++)
		{
		p[l] = s2[k];
		l++;
		}
p[l] = '\0';
return (p);
}
