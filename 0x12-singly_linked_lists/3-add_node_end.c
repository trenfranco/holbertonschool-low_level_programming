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
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ramon;
	list_t *lastnode;

	lastnode = *head;
	ramon = malloc(sizeof(list_t));

	if (ramon == NULL)
		return (NULL);

	ramon->str = _strdup(str);
	ramon->len = _strlen(str);
	ramon->next = NULL;

	if (*head == NULL)
	{
		*head = ramon;
		return (ramon);
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = ramon;
return (ramon);
}






/**
 * _strdup - pointer to newly allocated space in mem,
 *  contains a copy of given str
 *
 *@str: char
 *
 * Return: Pointer to arr.
 */
char *_strdup(const char *str)
{
char *c;
int i, j = 0;

if (str == NULL)
	return (NULL);

while (str[j] != '\0')
	{
	j++;
	}

c = malloc(j * sizeof(char) + 1);

if (c == NULL)
return (NULL);

for (i = 0; i < j; i++)
	{
	c[i] = str[i];
	}

return (c);
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
