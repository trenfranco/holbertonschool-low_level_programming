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
	char *val, *keycpy;
	hash_node_t *new = NULL, *temp = NULL;

	idx = key_index((unsigned char *)keycpy, ht->size);
        val = strdup(value);
        temp = ht->array[idx];
	keycpy = strdup(key);

	if (!key || !ht || keycpy == "")
		return (0);

	while (temp)
	{
	if (temp->key == keycpy)
	{
		temp->value = val;
		return (1);
	}
	temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->value = val;
	new->key = (char *)key;
	new->next = NULL;
	if (ht->array[idx] != NULL)
		new->next = temp;
	ht->array[idx] = new;
	return (1);
}

