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
	int i;
	int j;
	int **ptr;

	if (width  <= 0 || height <= 0)
	{
		return (NULL);
	}
	else if (width > 0 && height > 0)
	{
		ptr = (int **)malloc(height * sizeof(int *));
		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *)malloc(width * sizeof(int));
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}

	return (ptr);



}
