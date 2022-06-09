#include "lists.h"
/**
 * get_dnodeint_at_index - get node
 *
 * @head: head
 * @index: index
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	curr = head;
	i = 0;
	while (curr != NULL)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
