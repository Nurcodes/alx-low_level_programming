#include "main.h"
/**
 * print_diagonal - a function that prints a diagonal line
 * @n: letter being tested
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	} else
		_putchar(10);
}
