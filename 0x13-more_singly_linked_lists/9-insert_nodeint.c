#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert onde at index
 * @head: head
 * @idx: index
 * @n: n
 * Return: addressof new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *new;
	unsigned int i;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	aux = *head;
	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	for (i = 1; i < idx; i++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
