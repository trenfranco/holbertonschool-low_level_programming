#include "main.h"

/**
 * _strncat - check the code
 *@dest: dest
 *@src: source
 *@n: int
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
int i;

while (*start != '\0')
	{
	start++;
	}
	for (i = 0 ; i < n ; i++)
	{
	if (src[i] != '\0')
		{
	*start = src[i];
	start++;
		}
		else
		{
		break;
		}
	}

return (dest);


}
