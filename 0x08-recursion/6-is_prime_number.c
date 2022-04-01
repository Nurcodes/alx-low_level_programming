#include "main.h"
/**
 * is_prime_number - a function
 * @n: a letter
 * Return: always 1 or 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (n % i != 0 && n % 10 != 0 && n % 10 != 5)
		return (1);
	else
		return (prime(n, i + 1));
}
