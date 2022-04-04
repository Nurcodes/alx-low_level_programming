#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function
 * @str: letter
 * Return: 0
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(*str * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
