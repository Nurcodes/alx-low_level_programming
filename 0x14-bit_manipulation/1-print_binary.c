#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints binary of input number
 *
 * @n: num to be printed
 *
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	int mask = 1;

	if (n > 1)
		print_binary(n >> 1);
	if ((n & mask) == 1)
		_putchar('1');
	else
		_putchar('0');
}
