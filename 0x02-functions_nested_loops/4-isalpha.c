#include "main.h"
/**
 *_isalpha - A function that checks for an alphabetic character
 *@c: Letter being tested
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
		return (1);
	else
		return (0);
}
