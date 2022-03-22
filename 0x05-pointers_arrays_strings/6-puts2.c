#include "main.h"
/**
 * puts2 - a function which prints every other character
 * @str: letter being tested
 * Return: Always 0
 */
void puts2(char *str)
{
	char *temp = str;

	int i = 0;

	for (i = 0; i < str / 2; i++)
	{
		_putchar(*temp);
		temp+=2;
	}
	_putchar(10);
}
