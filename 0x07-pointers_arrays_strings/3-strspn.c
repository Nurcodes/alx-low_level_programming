#include "main.h"
/**
 * _strspn - a function
 * @s: a letter
 * @accept: a letter
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;
	unsigned int num = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num += 1;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}

	return (num);
}
