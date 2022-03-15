#include "main.h"
/**
 * print_alphabet_x10 - print 10x
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int a;

	while (i < 10)
	{	a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		i++;
	}
}
