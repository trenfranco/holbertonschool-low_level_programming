#include "main.h"

/**
 * rot13- check the code
 * @a: char
 * Return: Always 0.
 */
char *rot13(char *a)
{
int i = 0;

while (a[i] != '\0')
	{
	if ((a[i] >= 'A' && a[i] <= 'M') || (a[i] >= 'a' && a[i] <= 'm'))
		{
		a[i] = a[i] + 13;
		}
	while ((a[i] >= 'N' && a[i] <= 'Z') || (a[i] >= 'n' && a[i] <= 'z'))
		{
		a[i] = a[i] - 13;
		}
	i++;
	}
return (a);
}


