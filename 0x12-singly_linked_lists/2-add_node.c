#include "lists.h"
#include <string.h>
#include <stdlib.h>
char *_strdup(const char *str);
int _strlen(const char *s);
/**
 * add_node -  adds node at the begging
 * @head: head
 * @str: string
 * Return: &new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *hola;

	hola = malloc(sizeof(list_t));
	if (hola == NULL)
		return (NULL);

	hola->str = _strdup(str);
	hola->len = _strlen(str);
	hola->next = *head;
	*head = hola;

	return (hola);

}
/**
 * _strdup - strdup C function
 * @str: string to duplicate
 *
 * Return: str
 */
char *_strdup(const char *str)
{
	int i, n = 0;
	char *strcopy;

	if (str == NULL)
		return (NULL);
	do {
		n++;
	} while (str[n - 1]);
	strcopy = malloc(sizeof(char) * n);
	if (strcopy == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		strcopy[i] = str[i];
	}

	return (strcopy);
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
