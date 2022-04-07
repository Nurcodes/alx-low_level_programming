#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function
 * @b: letter
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	if (b >= 1000000)
		exit(98);
	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
	{
		ptr = NULL;
		exit(98);
	}
	return (ptr);
}
