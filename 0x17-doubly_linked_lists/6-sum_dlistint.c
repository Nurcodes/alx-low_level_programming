#include "lists.h"
/**
 * sum_dlistint - dlist
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *curr;

	sum = 0;
	curr = head;

	if (head == NULL)
		return (0);
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
