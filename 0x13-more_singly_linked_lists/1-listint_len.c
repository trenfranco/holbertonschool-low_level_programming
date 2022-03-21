#include "lists.h"

/**
 * listint_len -  returns the number of elements in the linked list
 * @h: pointer to list
 * Return: counter
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	if (h->next == NULL)
		count++;
	return (count);
}
