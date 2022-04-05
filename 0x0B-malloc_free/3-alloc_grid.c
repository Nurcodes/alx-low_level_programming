#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function
 * @width: param
 * @height: param
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int k;
	int **ptr;

	if (width  <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(ptr[k]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			*(*(ptr + i) + j) = 0;
		}
	}
	return (ptr);
}
