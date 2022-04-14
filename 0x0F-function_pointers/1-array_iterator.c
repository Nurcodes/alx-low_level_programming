#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function
 * @size: size of array
 * @array: array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if(array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
