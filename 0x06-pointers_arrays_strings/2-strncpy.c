#include "main.h"
/**
 * _strncpy - a function which copies a function
 * @dest: first letter
 * @src: second letter
 * @n: third letter
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
