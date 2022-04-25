#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts at position specified
 *
 * @head: start of list
 *
 * @idx: position
 *
 * @n: int value
 *
 * Return: Pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	tmp = *head;
	while (--idx)
	{
		tmp = tmp->next;
	}
	if (tmp != NULL)
	{
		new->next = tmp->next;
		new->n = n;
		tmp->next = new;
		return (new);
	} else
		return (NULL);

}

