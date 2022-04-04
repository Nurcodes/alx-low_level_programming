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
	char *p = str;

	if (str == NULL)
		return (NULL);
	while (*p != '\0')
	{
		p++;
	}
	len = p - str;
	ptr = (char *)malloc(len * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	if (sizeof(str) == sizeof(ptr))
		return (ptr);
	else
		return(NULL);
}
