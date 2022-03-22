#include "main.h"
/**
 * rev_string - a function which reverses a string
 * @s: letter being tested
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int count = 0;

	while (*s[count] != '\0')
	{
		s++;
		count++
	}

	while (count > 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar(10);
}
