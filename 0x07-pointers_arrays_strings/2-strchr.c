#include "main.h"

/**
 * _strchr - a function
 * @s: a letter
 * @c: a letter
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	if (*s == '\0')
	{
		return ('\0');
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}

	return ('\0');
}
