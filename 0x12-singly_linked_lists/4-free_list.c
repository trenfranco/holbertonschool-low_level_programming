#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list
 * @head: head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *last;

	if (head == NULL)
	{
		free(head);
		return;
	}
	last = head;
	while (last->next != NULL)
	{
		free(last->str);
		free(last);
		last = last->next;
	}
free(last->str);
free(last);
return;

}
