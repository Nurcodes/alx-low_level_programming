#include "main.h"
/**
 * print_triangle - a function which prints a triangle
 * @size: letter being tested
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int k;

	for (a = 0; a < size; a++)
	{
		for (b = size - 1 - a; b > 0 ; b--)
		{
			_putchar(32);
		}
		for (k = 0; k <= a; k++)
		{
			_putchar(35);
		}
		_putchar(10);
	}

	if (size <= 0)
		_putchar(10);
}
