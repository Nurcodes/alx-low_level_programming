#include "main.h"
/**
 * print_rev - a function which prints a string in reverse
 * @s: letter being tested
 * Return: Always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;


	}
	_putchar('\n');
}
