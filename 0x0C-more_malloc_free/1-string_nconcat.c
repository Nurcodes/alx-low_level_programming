#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings up to n letters
 * @s1: string 1
 * @s2: string 2
 * @n: number of chars to add to s1
 * Return: A pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
		n = 0;
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(*ptr) * (len1 + 1 + (len2 - n)));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0' ; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);


}
