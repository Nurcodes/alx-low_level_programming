#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all elements
 *
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		sum++;
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", 0);
		} else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (sum);

}
