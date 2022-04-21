#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - get the length of the list
 *
 * @h: head of list
 *
 * Return: length
 */

size_t list_len(const list_t *h)
{

	int sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
