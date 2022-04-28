#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - function to unset value to 0
 *
 * @n: pointer
 *
 * @index: index
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
