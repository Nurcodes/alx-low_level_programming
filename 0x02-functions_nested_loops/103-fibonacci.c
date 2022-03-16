#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	long t1 = 0;
	long t2 = 1;
	long sum = 0;
	long r = 0;

	while (r <= 4000000)
	{
		r = t1 + t2;
		t1 = t2;
		t2 = r;

		if ((t1 % 2) == 0)
			sum += t1;
	}
	printf("%ld \n", sum);
	return (0);
}
