#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 - success
 *
 */
int main(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 100; a++)
	{
		for (b = 1; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(32);
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98 && b != 99)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
