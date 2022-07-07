#include "hash_tables.h"
/**
 * key_index - returns the index of a given key
 *
 * @key: the key to hash and return index of
 *
 * @size: size of the hash table
 *
 * Return: index at which the key value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
