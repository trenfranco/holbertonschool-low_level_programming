#include "main.h"

/**
 * leet - check the code for
 *@a: char
 * Return: Always 0.
 */
char *leet(char *a)
{
int i = 0;
int b = 0;
char j[11] = {"aAeEoOtTlL"};
char n[11] = {"4433007711"};

while (a[i] != '\0')
	{
	for (b = 0 ; b < 11 ; b++)
		{
		if (a[i] == j[b])
			{
			a[i] = n[b];
			}
		}
	i++;
	}
return (a);

}
