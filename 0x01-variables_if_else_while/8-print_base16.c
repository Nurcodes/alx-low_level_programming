#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return - 0 always
 *
 */
int main(void)
{
	int n;
	char hex = 'a';

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		} else 
		{
			putchar(hex);
			hex++;
		}
	}
	return (0);
}
