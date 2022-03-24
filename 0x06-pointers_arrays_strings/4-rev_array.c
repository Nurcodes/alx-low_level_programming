#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: letter being tested
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b[100];

	for (i = 0; a[i] != a[n]; i++)
	{
		b[i] = a[i];
	}
	i = 0;

	while (n > 0)
	{
		a[i] = b[n - 1];
		i++;
		n--;
	}
}
