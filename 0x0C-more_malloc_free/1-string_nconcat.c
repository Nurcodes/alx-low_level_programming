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
	unsigned int len;
	unsigned int p = 0;
	unsigned int j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len2 > n)
		len2 = n;
	len = len1 + len2;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[p++] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[p++] = s2[j];
	}
	ptr[p] = '\0';
	return (ptr);


}
