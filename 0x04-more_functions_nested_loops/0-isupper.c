#include "main.h"
/**
 * _isupper - a function which returns a captial or not
 * @c: letter being tested
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		c = 1;
	else if (c <= 122 && c >= 97)
		c = 0;
	return (c);
}
