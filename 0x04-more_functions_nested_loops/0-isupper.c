#include "main.h"
/**
 * _isupper - a function which returns a captial or not
 * @c: letter being tested
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c < 90 && c > 64)
		c = 1;
	else if (c < 123 && c > 96)
		c = 0;
	return (c);
}
