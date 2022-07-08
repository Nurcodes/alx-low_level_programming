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
	hash_node_t *prev;
	unsigned long int slot;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
	{
		return (0);
	}

	slot = key_index((unsigned const char *)key, ht->size);

	element = ht->array[slot];

	if (element == NULL)
	{
		ht->array[slot] = ht_pair(key, value);
		return (1);
	}

	while (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
		{
			free(element->value);
			element->value = malloc(strlen(value) + 1);
			return (1);
		}

		prev = element;
		element = prev->next;
	}
	if (prev->next == NULL)
	{
		prev->next = ht_pair(key, value);
		return (1);
	}

	return (0);
}

/**
 * ht_pair - allocates new element in hash table
 *
 * @key: key
 * @value: value
 * Return: element
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *element = malloc(sizeof(hash_node_t));

	if (element == NULL)
		return (0);

	element->key = malloc(strlen(key) + 1);
	if (element->key == NULL)
	{
		free(element->key);
		free(element->value);
		free(element);
		return (0);
	}
	element->value = malloc(strlen(key) + 1);

	element->key = strcpy(element->key, key);
	element->value = strcpy(element->value, value);


	element->next = NULL;

	return (element);
}
