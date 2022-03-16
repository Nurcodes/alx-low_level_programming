#include "main.h"
/**
 * print_to_98 - a function which prints all natural numbers from n to 98
 * @n: letter being tested
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		else if (n == 98)
		{
			printf("%d", n);
		}
	}
	n++;
}
