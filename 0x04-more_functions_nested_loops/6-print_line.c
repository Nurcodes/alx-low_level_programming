#include "main.h"
/**
 * print_line - a function which prints a straight line
 * @n: letter being tested
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	} else
		_putchar(10);
}
