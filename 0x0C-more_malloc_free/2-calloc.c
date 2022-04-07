#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: a
 * @size: s
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (nmemb)
	{
		ptr[i] = 0;
		i++;
		nmemb--;
	}
	return (ptr);


}
