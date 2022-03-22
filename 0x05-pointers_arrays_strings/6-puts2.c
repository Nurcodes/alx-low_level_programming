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
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count / 2; i++)
	{
		_putchar(*temp);
		temp+=2;
	}
	_putchar(10);
}
