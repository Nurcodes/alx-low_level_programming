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
			list_t *temp2 = temp;
			temp = temp->next;
			free(temp2);
		}
	} else
		exit(1);

	head = NULL;
}
