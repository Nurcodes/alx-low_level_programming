#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_mult - a function that gets the multiples of a number
 *
 * Return: Always 0
 */
void get_mult(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			sum += i;
		}
	}
	putchar('\n');
}
