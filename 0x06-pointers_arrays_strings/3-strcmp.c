#include "main.h"
int _strlen(char *s);

/**
 * _strcmp - check the code
 *@s1: stringaa 1
 *@s2: str 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

if (_strlen(s1) < _strlen(s2))
	{
	return (_strlen(s1) - _strlen(s2));
	}
else if (_strlen(s1) > _strlen(s2))
	{
	return (_strlen(s2) + _strlen(s1));
	}
else
{
return (0);
}


}

/**
 * _strlen - retorna el largo
 * @s: char
 * Return: largo
 */
int _strlen(char *s)
{
int cont = 0;
char l = '0';
if (*s == '\0')
return (0);
while (l != '\0')
{
cont++;
l = *(s + cont);
}
return (cont);
}
