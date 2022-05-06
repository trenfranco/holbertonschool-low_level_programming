#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head
 * @index: idx
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	aux = *head;
	if (!(*head) || !head || (index != 0 && !(*head)->next))
		return (-1);
	if (index == 0 && aux->next != NULL)
	{
		*head = aux->next;
		aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	if (index == 0 && aux->next == NULL)
	{
		*head = NULL;
		free(aux);
		return (1);
	}

	while (aux)
	{
		if (i == index)
		{
			aux->prev->next = aux->next;
			aux->next->prev = aux->prev;
			free(aux);
			return (1);
		}
		aux = aux->next;
		i++;
	}
	if (!aux || !aux->next)
		return (-1);
	aux->prev->next = NULL;
	aux->prev = NULL;
	free(aux);
	return (1);

}
