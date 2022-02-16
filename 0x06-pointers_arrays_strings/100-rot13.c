#include "main.h"

/**
 * rot13- check the code
 * @a: char
 * Return: Always 0.
 */
char *rot13(char *a)
{
int i = 0;
char f;
while (a[i] != '\0')
	{
	f = a[i];
	if ((a[i] >= 'A' && a[i] <= 'M') || (a[i] >= 'a' && a[i] <= 'm'))
		{
		a[i] = a[i] + 13;
		}

	while ((f >= 'N' && f <= 'Z') || (f >= 'n' && f <= 'z'))
		{
		a[i] = a[i] - 13;
		break;
		}
	i++;
	}
return (a);
}


