#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at node in the index
 * @head: list
 * @index: index of the list
 *
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	unsigned int i;

	aux = *head;
	if ((*head) == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(aux);
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		if (aux == NULL)
			return (-1);
		aux = aux->next;
	}
	aux->next = aux->next->next;
	free(aux->next);
	return (1);
}
