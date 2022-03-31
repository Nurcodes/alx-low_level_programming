#include "main.h"
/**
 * _pow_recursion - a function
 * @x: a letter
 * @y: a letter
 * Return: x to y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
