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
	unsigned long int idx = 0;
	hash_node_t *new = NULL, *temp = NULL;

	if (!key || !ht)
		return (0);

	temp = ht->array[idx];
	idx = key_index((const unsigned char *)key, ht->size);

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}

