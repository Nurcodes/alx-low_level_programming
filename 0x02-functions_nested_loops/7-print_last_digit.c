#include "main.h"
/**
 *print_last_digit - a function which returns the value of the last digit
 *@a: letter being tested
 * Return: Always 0
 */
int print_last_digit(int a)
{
	if (a < 0)
		_putchar(-a%10);
	else
		_putchar(a%10);
	return (0);
}
