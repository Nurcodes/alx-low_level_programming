#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - pops the head node off and returns its value
 *
 * @head: list
 *
 * Return: value
 */

int pop_listint(listint_t **head)
{
	int a = 0;

	listint_t *temp;

	temp = *head;

	a = temp->n;

	if (head == NULL)
		return (0);

	*head = temp->next;

	return (a);
}
