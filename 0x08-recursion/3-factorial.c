#include "main.h"
/**
 * factorial - a function
 * @n: a letter
 * Return: always 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	n = n * factorial(n - 1);
	return (n);
}
