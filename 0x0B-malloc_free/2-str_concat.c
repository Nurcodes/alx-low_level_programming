#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: letter
 * @s2: letter
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, k, m, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
	{
	}
	for (m = 0; s2[m] != '\0'; m++)
	{
	}
	ptr = malloc(1 + j + m * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		ptr[i] = s2[k];
	}
		ptr[i] = '\0';

	return (ptr);
}
