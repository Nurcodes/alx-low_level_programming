#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: frees head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}
}
