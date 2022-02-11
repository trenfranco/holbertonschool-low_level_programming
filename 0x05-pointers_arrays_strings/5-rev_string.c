#include "main.h"

/**
 * rev_string - check the code
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
	{
	int i;
	int j = _strlen(s) - 1;
	char str[] = " ";

	for (i = 0 ; i < j ; i++)
		{
		str[0] = s[j];
		s[j] = s[i];
		s[i] = str[0];
		j--;
		}

	}









/**
 * _strlen - check the code
 * @s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
int count;
char c;

c = *s;
count = 0;

while (c != '\0')
{
count++;
c = *(s + count);

}
return (count);
}
