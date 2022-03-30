#include "main.h"
/**
 * _strstr - a function
 * @haystack: a letter
 * @needle: a letter
 * Return: Always 0;
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	int sum;

	while (haystack[i] != '\0')
	{
		sum = i;
		j =0;

		while (haystack[i] == needle[i] && needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + sum);
		i = sum + 1;
	}
	return ('\0');
