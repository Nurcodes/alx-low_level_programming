#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define NAME __FILE__

/**
 * main - f
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; NAME[i] != '\0'; i++)
	{
		_putchar(NAME[i]);
	}
	_putchar(10);

	return (0);
}
