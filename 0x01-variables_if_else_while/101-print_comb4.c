#include <stdio.h>
/**
 * main - entry point write a program that prints all
 *
 *
 * Return: Always 0 on success
 *
 */

int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if ((a != b && a != c) && (b != c))
				{
					if (a > b || a > c || b > c)
					{
						continue;
					} else
					{
						putchar(a);
						putchar(b);
						putchar(c);
					}
					if (a == 55 && b == 56 && c == 57)
					{
						continue;
					} else
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
