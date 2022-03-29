#include "main.h"

/**
 * _memcpy - a function which copies memory area
 * @dest: a letter
 * @src: a letter
 * @n: a letter
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
