#include "main.h"
/**
 * _strpbrk - a function
 * @s: a letter
 * @accept: a letter
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j,i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
