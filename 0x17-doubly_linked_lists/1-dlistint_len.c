#include "lists.h"
/**
 * dlistint_len - returns len of dlist
 *
 * @h: head
 *
 * Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
