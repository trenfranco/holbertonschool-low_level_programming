#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t
 * @head: pointer to list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	 listint_t *end;

	if (head == NULL)
	{
		free(head);
		return;
	}

	end = head;
	while (end->next != NULL)
	{
		free(end);
		end = end->next;
	}
	free(end);
	return;
}
