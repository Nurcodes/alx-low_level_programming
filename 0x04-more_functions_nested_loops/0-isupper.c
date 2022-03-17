#include "main.h"
/**
 * _isupper - a function which returns a captial or not
 * @c: letter being tested
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c < 90 && c > 64)
		_putchar(49);
	else if (c < 123 && c > 96)
		_putchar(48);
	return (0);
}
