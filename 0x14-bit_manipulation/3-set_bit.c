#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * set_bit - sets bit
 *
 * @n: pointer
 *
 * @index: index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
		return (-1);
	if (*n | 1 << index)
	{
		*n = *n | 1 << index;
		return (1);
	}
	else
		return (-1);
}
