#include "main.h"

/**
 * cap_string - check the code
 *@a: char
 * Return: Always 0.
 */
char *cap_string(char *a)
{
int i = 0;

if (*a >= 'a' && *a <= 'z')
	*a = *a - 32;
while (a[i] != '\0')
	{
	if (a[i] == ' ' || a[i] == '	' || a[i] == '\n'
|| a[i] == ',' || a[i] == ';' || a[i] == '.' ||
a[i] == '!' || a[i] == '?' || a[i] == '"' ||
a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
	{
	if (a[(i + 1)] >= 'a' && a[(i + 1)] <= 'z')
	{
	a[(i + 1)] = a[(i + 1)] - 32;
	}
	}
	i++;
	}
	return (a);

}
