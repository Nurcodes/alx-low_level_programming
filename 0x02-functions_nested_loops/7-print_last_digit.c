#include "main.h"
/**
 *print_last_digit - a function which returns the value of the last digit
 *@a: letter being tested
 * Return: Always 0
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
		return (a);
	}
}
