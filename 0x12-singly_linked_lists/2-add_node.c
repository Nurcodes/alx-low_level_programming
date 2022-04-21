#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds new node at head of list
 *
 * @head: double pointer to the head
 *
 * @str: string to copy
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nwnode;

	nwnode = malloc(sizeof(list_t));
	if (nwnode == NULL)
		return (NULL);
	nwnode->str = strdup(str);
	nwnode->next = *head;
	nwnode->len = _strlen(str);
	*head = nwnode;

	return (nwnode);


}

/**
 * _strlen - returns length of string
 *
 * @str: pointer to string literal
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
