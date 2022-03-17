#include "main.h"
/**
 * _isupper - a function which returns a captial or not
 * @c: letter being tested
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
