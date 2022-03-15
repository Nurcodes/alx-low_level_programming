#include "main.h"
/**
 *_abs - a function that computes the absolute value of an integer
 *@c: letter being checked
 *Return: Always 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c *= -1);
	}
	if (c > 0)
	{
		return (c *= 1);
	} else
		return (c);
}
