#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_get - gets a value from a key
 * @ht: hash table
 * @key: key
 * Return: A value of the key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx, i;
	hash_node_t *element;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	idx = key_index((unsigned const char *)key, ht->size);

	element = ht->array[idx];
	if (element == NULL)
		return (NULL);

	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
	}

	return (NULL);

}

