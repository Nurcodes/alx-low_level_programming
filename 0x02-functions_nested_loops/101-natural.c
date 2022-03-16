#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum;
	int lim = 1024;

	for (i = 0; i < lim; i++)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
			/**printf("int is %d and sum is: %d\n", i, sum);*/
		}
		else if (i % 5 == 0)
		{
			sum = sum + i;
			/**printf("int is %d and sum is: %d\n", i, sum);*/
		}
	}
	printf("%d\n", sum);
	return (0);
}
