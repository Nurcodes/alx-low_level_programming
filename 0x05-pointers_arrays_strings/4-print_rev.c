#include "main.h"
/**
 * print_rev - a function which prints a string in reverse
 * @s: letter being tested
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i;

	for (i = s['\0']; i >= s[0]; i--)
	{
		if (s[i] != s['\0'])
		{
			_putchar(s[i]);
		} else
			continue;
	}
}
