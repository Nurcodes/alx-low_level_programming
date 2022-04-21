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

	if (head != NULL)
	{
		while (temp->next != NULL)
		{
			free(temp->next);
			temp = temp->next;
		}
	} else
		exit(1);
}
