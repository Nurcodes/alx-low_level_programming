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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n > 0)
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	
	return (dest);
}
