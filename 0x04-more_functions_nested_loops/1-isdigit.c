#include "main.h"
/**
 * _isdigit - a function which checks wether a digit or not
 * @c: letter being tested
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		c = 1;
	else
		c = 0;
	
	return (c);
}
