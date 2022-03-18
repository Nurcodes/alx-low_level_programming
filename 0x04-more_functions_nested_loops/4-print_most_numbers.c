#include "main.h"
/**
 * print_most_numbers - a function which prints all but 2 and 4 up to 9
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a = 48;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar(10);
}
