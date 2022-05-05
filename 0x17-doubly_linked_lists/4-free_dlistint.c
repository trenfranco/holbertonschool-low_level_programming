#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head)
	{
		while (head)
		{
			aux = head->next;
			free(head);
			head = aux;
		}
	}
}
