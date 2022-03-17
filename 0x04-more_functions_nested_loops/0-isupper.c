#include "main.h"
/**
 * _isupper - a function which returns a captial or not
 * @c: letter being tested
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c < 90 && c > 64)
		c = 49;
	else if (c < 123 && c > 96)
		c = 48;
	return (c);
}
