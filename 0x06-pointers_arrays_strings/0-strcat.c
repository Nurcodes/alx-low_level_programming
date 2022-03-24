#include "main.h"
/**
 * _strcat - a function which concatenates to strings
 * @dest: first parameter
 * @src: second parameter
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;

	}
	dest[i] = '\0';
	return (dest);
}
