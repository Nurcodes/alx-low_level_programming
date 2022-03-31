#include "main.h"

/**
 * _puts_recursion - a function which prints a string followed by a newline
 * @s: a pointer to a string
 * Return: A string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);

}

/**
 * main - a function
 * Return: Always 0
 */

int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
