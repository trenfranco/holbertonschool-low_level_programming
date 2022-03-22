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
	listint_t *new, *aux;

	aux = malloc(sizeof(listint_t));

	if (aux == NULL)
		return (NULL);
	aux->n = n;

	if (*head == NULL)
	{
		*head = aux;
		aux->next = NULL;
	}

	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = aux;
	aux->next = NULL;
	return (aux);
}
