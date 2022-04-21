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
	list_t *aux = temp;

	while (temp->next != NULL)
	{
		aux = temp;
		temp = temp->next;
		free(aux->str);
		free(aux);
	}
	free(temp->str);

}
