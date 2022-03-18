#include "main.h"
/**
 * more_numbers - a function which prints 10x 0-14
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		b = 0;

		while (b <= 14)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			
				_putchar(b % 10 + '0');

			b++;
		}
		_putchar(10);
	}
}
