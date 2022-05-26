#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *@ht: hash table
 *@key: key
 *@value: value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0, i = 0;

	if (!key | key == "")
		return (0);

	idx = key_index(key, size);

	if (ht->array[idx]->next == NULL)
	{
		ht->array[idx]->next
	}
	else
	{
	
	}

