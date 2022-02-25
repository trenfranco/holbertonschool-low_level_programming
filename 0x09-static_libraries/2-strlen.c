#include "main.h"
#include <stdio.h>

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
