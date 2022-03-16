#include <stdio.h>
#include "main.h"
/**
 * multi - a function that get the multiples
 * main - main entry point
 * Return: Always 0
 */
int main(void)
{
	multi();
	return (0);
}

int multi(void)
{
	int i = 1;
	int sum = 0;
	int lim = 1024;
	int b = 0;

	for (i = b; i < lim; i++)
	{
		if (i % 3 == 0 && i != 0)
		{
			sum += i;
			printf("Multiple is %d and sum is: %d\n", i, sum);
		}
		else if (i % 5 == 0 && i != 0)
		{	sum += i;
			printf("Multiple is %d and sum is: %d\n", i, sum);
		}
	}
	return (0);
}
