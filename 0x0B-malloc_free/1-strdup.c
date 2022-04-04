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
	int len;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] < '\0')
	{
		len++;
		i++;
	}
	len += 1;
	ptr = (char *)malloc(len * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
