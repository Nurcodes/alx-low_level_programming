#include "main.h"
/**
 * _strncat - a function which concatenates two strings
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[k] != '\0')
	{
		k++;
	}

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	return (dest);


}
