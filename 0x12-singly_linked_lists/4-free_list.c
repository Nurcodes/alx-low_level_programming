#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees list
 *
 * @head: start of linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
