#include "main.h"
/**
 *jack_bauer - a function that prints every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 30; j++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(":");
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar(10);
		}
	}
}
