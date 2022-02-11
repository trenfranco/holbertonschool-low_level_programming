#include "main.h"
/**
 * puts_half - check the code
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
	{
	int i;
	int j = _strlen(str) - 1;

	for (i = (j / 2) + 1 ; i <= j ; i++)
		{
		_putchar(str[i]);
		}
_putchar('\n');
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
