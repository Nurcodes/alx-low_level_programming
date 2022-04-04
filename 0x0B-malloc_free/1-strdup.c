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
	int len = 0;

	for (i = 0; str[i] < '\0'; i++)
	{
		len++;
	}

	ptr = malloc(len * sizeof(char));

	if (ptr == NULL || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
