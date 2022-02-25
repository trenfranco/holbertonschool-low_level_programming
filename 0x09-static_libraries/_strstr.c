#include "main.h"

/**
 * _strstr - check the code
 * @haystack: a
 * @needle: a
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k, z;

for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
		{
		if (haystack[i] == needle[j])
			{
			for (k = 1; needle[k] != '\0'; k++)
				{
				if (needle[k] == haystack[i + k])
					{z = 1; }
				else
					{z = 0;
					break;
					}

				}
			}
	if (z == 1)
	{
	return (haystack + i);
	}
		}
	}
if (*needle == '\0')
return (haystack);
return ('\0');
}
