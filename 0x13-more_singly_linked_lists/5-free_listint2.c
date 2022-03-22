#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - prints all the elements of a listint_t
 * @head: head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *franco;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		franco = *head;
		*head = (*head)->next;
		free(franco);
		franco = NULL;
	}

}
