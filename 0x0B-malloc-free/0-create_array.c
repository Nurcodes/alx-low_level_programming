#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with specific char
 * @size: first
 * @c: second
 * Return: Null or 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	str[0] = c;
	return (0);
}
