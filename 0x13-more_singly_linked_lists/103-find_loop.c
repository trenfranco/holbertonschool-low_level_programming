#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - finds a loop
 * @head: head
 * Return: pointer to loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *aux;

	aux = head;
	while (aux != NULL)
	{
		if (aux->next == head)
			return (aux);
		aux = aux->next;
	}
	return (NULL);
}
