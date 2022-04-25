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
	listint_t *temp = *head;

	int n = temp->n;

	*head = temp->next;

	return (n);
}
