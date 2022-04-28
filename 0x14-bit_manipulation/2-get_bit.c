#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - gets bit value at index
 *
 * @n: n
 *
 * @index: index
 *
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int curr = 0;

	curr += n >> index;

	if (curr & 1)
		return (1);
	else if (!(curr & 1))
		return (0);
	else
		return (-1);
}
