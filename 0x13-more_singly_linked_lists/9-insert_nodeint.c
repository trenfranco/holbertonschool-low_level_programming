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
	listint_t *aux, *new, *pedro;
	unsigned int i;

	if (head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	aux = *head;

	for (i = 0; i < (idx - 1); i++)
	{
		if (aux == NULL)
			return (NULL);
		aux = aux->next;/*nos paramos en el nodo q queremos*/
	}
	pedro = aux->next;
	aux->next = new;
	new->next = pedro;
	return (new);
}
