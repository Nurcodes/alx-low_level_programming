#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function
 * @ac: function
 * @av: letter
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int k, i, len = 0;
	int a, b;
	int count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			len++;
		}
		len++;
	}

	ptr = (char *)malloc((1 + len) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ptr[count++] = av[a][b];
		}
		ptr[count++] = '\n';
	}
	ptr[count] = '\0';

	return (ptr);
}
