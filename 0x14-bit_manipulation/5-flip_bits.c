#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - flips needed to get to next number
 *
 * @n: 1
 *
 * @m: 2
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int dist = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((m & 1) != (n & 1))
		{
			dist++;
		}
		m >>= 1;
		n >>= 1;
	}

	return (dist);
}
