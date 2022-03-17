#include "lists.h"

/**
 * print_list -  prints all the elements of a list
 * @h: head
 * Return: counter
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	if (h->next == NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
	}
	return (i);
}
