#include "main.h"
/**
 *print_last_digit - a function which returns the value of the last digit
 *@a: letter being tested
 * Return: Always 0
 */
int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
