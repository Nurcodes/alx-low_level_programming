#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int t1 = 0;
	unsigned long int t2 = 1;
	unsigned long int t3;
	long long int i = 0;

	while (i < 98)
	{
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
		if (i == 97)
			printf("%ld\n", t3);
		else
			printf("%ld, ", t3);
		i++;
	}
}
