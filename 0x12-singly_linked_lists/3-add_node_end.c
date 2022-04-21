#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds newnode to end of list
 *
 * @head: double pointer to list head
 *
 * @str: string to be copied
 *
 * Return: new node at end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwnode;
	list_t *tail;

	nwnode = malloc(sizeof(list_t));

	if (nwnode == NULL)
		return (NULL);
	nwnode->len = _strlen(str);
	nwnode->str = strdup(str);
	if (nwnode->str == NULL)
	{
		free(nwnode);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = nwnode;
		return (nwnode);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = nwnode;
	return (nwnode);
}

/**
 * _strlen - length
 *
 * @str: p
 *
 * Return: p
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
