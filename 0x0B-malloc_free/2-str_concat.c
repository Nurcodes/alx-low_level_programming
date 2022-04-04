#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns a pointer
 * @s1: first
 * @s2: second
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, j, m;
	char *ptr;
	int n = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (k = 0; s2[k] != '\0'; k++)
	{

	}
	ptr = malloc(n + 2 * sizeof(char));
	if (ptr == NULL)
	{
		printf("fail");
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}
	for (m = 0; s2[m] != '\0'; m++)
	{
		ptr[j] = s2[m];
		j++;
	}
	ptr[j] = '\0';


	return (ptr);



}
