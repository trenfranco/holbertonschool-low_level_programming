#include "lists.h"

/**
 * print_list -  prints all the elements of a list
 * @h: head
 * Return: counter
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

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
