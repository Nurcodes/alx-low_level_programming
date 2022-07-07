#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - Creates and returns a hashtable
 *
 * @size: unsigned long int size
 * Return: Pointer to new hash table ro Null
 *
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i = 0;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
