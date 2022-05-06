#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at index
 * @h: head
 * @idx: index
 * @n: node value
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new = NULL;
	unsigned int i = 0;

	if (!(*h))
		return (NULL);

	aux = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (aux->next != NULL)
	{
		if (i == idx)
		{
			aux->prev->next = new;
			new->prev = aux->prev;
			aux->prev = new;
			new->next = aux;
			return (new);
		}
	aux = aux->next;
	i++;
	}
	if (aux->next == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
