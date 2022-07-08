#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht = NULL;

    ht = hash_table_create(1024);
    printf("%d\n", hash_table_set(ht, "hetairas", "bob"));
    printf("%d\n", hash_table_set(ht, "mentioner", "bob1"));
    printf("%d\n", hash_table_set(ht, "stylist", "John"));
    printf("%d\n", hash_table_set(ht, "subgenera", "joy"));
    return (EXIT_SUCCESS);
}
