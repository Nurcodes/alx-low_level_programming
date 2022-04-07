#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function
 * @min: m
 * @max: m
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int len = 0;

	if (min > max)
		return (NULL);

	while (max >= min)
	{
		len++;
		max--;
	}
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
