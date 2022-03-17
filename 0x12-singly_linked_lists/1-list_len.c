#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list
 * @h: head
 * Return: counter
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	if (h->next == NULL)
		i++;

	return (i);
}
