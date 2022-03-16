#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long t1 = 1;
	long t2 = 2;
	long nextT = t1 + t2;
	
	printf("%ld %ld\n", t1, t2);
	while(i <= 50)
	{
		printf("%ld\n", nextT);
		t1 = t2;
		t2 = nextT;
		nextT = t1 + t2;
		i++;
	}
	return (0);
}
