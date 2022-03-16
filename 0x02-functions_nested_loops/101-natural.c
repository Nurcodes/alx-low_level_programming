#include <stdio.h>
#include "main.h"
/**
 * get_mult - a function that gets the multiples of a number
 * @n: letter being tested
 * Return: Always 0
 */
int multi(int n)
{
	int i;
	int sum;

	for (i = 0; i < n; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
