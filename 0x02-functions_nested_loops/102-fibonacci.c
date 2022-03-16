#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long t1 = 0;
	long t2 = 1;
	long nextT = t1 + t2;

	printf("%ld, ", t2);
	while (i <= 48)
	{
		t1 = t2;
		t2 = nextT;
		nextT = t1 + t2;
		if (i == 48)
			printf("%ld\n", nextT);
		else
			printf("%ld, ", nextT);
		i++;
	}
	putchar(10);
	return (0);
}
