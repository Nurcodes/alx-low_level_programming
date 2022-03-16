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

	while (i <= 49)
	{
		if (i == 49)
			printf("%ld\n", nextT);
		else if (i != 49)
			printf("%ld, ", nextT);
		t1 = t2;
		t2 = nextT;
		nextT = t1 + t2;
		i++;
	}
	return (0);
}
