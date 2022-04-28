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
	unsigned long int curr;
	int ans;

	curr = 1 << index;
	if (index >= sizeof(n) * 8)
		return (-1);
	ans = curr & n ? 1 : 0;
	return (ans);
}
