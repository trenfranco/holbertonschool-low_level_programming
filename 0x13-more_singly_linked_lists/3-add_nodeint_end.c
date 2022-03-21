#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  add node at the end of a listint_t
 * @head: pointer to list
 * @n: n
 * Return: address of las element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *aux;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);
	end->n = n;

	if (*head == NULL)
	{
		*head = end;
		end->next = NULL;
	}

	aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = end;
	end->next = NULL;
	return (end);
}
