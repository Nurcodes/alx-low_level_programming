#include "main.h"
/**
 * print_alphabet - alphabet print
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
