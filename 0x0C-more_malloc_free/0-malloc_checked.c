#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>
/**
 * malloc_checked - a function
 * @b: letter
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b >= INT_MAX)
		exit(98);
	ptr = malloc(b);
	if (ptr == NULL)
	{
		ptr = NULL;
		exit(98);
	}
	return (ptr);
}
