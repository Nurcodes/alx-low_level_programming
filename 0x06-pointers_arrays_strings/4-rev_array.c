#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: letter being tested
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int b;
	int j;
	int c = 0;

	j = n - 1;

	while (c < j)
	{
		b = a[c];
		a[c] = a[j];
		a[j] = b;
		c++;
		j--;
	}
}
