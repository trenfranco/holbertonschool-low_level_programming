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

	while (head != NULL)
	{
		end = head;
		head = head->next;
		free(end);
	}
}
