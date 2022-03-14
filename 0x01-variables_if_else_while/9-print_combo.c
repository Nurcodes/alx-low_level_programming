#include <stdio.h>
/**
 * main - Print all possible combinations of numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
