#include "main.h"

/**
 * _islower() - checks to see if lower or not.
 *
 * -islower(c) - is an argument of type int
 *
 *  Return: Always 0.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
