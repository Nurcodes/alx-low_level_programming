#include "main.h"
/**
 * print_line - a function which prints a straight line
 * @n: letter being tested
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar(10);
	}
	if (n < 0)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar(10);
}
