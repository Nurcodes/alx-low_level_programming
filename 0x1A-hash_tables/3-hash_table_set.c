#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element into the hash table
 *
 * @ht: our hash table
 *
 * @key: our key
 *
 * @value: our value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int slot;
	char *copy;
	int i;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
	{
		return (0);
	}

	copy = strdup(value);

	if (copy == NULL)
		return (0);

	slot = key_index((unsigned const char *)key, ht->size);

	for (i = slot; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	element = ht_set(key, copy);
	element->value = copy;
	element->next = ht->array[slot];
	ht->array[slot] = element;
	return (1);
}

/**
 * ht_set - set node
 * @key: key
 * @copy: copy
 * Return: a list
 */
hash_node_t *ht_set(const char *key, char *copy)
{
	hash_node_t *element;

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		free(copy);
		return (0);
	}
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}
	return (element);
}
