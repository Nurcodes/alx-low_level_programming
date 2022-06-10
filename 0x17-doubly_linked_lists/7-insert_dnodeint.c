#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: double to header
 * @idx: idx
 * @n: n
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr;
	dlistint_t *new_node;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || !(*h))
		return (NULL);
	new_node->n = n;
	i = 0;
	curr = *h;

	while (curr != NULL)
	{
		if (i == idx)
		{
			new_node->next = curr;
			curr->prev->next = new_node;
			new_node->prev = curr->prev;

			if (curr->next == NULL)
			{
				new_node = add_dnodeint_end(h, n);
				return (new_node);
			}
		}
		i++;
		curr = curr->next;
	}
	return (NULL);
}
