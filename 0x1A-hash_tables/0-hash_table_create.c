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
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t) * 1);

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table->array);
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
