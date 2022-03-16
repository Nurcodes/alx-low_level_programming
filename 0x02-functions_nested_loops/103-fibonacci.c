#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main (void)
{
	long i = 0;
	long sum =  0;
	long t1 = 0;
	long t2 = 1;
	long next = t1 + t2;

	while (i < 20)
	{
		if (next % 2 == 0)
		{
			sum += next;
			printf("%ld", sum);
		}
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		i++;

	}
	putchar(10);
	return (0);
}
