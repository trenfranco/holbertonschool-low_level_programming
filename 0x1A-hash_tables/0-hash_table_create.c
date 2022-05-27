#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the table
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	return (ht);

}
