#include <stdio.h>
/**
 * main - Write a program that prints all possible of two digits
 *
 *
 * Return: Always 0 on (success)
 */

int main(void)
{
	int a;
	int j;

	for (a = 48; a < 57; a++)
	{
		for (j = 49; j < 58; j++)
		{
			if (a != j && a < j)
			{
				putchar(a);
				putchar(j);
				if (a == 56 && j == 57)
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
	putchar(10);
	return (0);

}
