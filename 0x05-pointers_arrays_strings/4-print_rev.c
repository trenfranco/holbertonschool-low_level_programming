#include "main.h"

/**
 * print_rev - check the code
 * @s: char
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
char a = *s;
i = _strlen(s) - 1;

while (i >= 0)
{
a = s[i];
_putchar(a);
i--;

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
