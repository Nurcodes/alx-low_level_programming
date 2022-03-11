#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints lowercase alphabet reverse
 *
 * Return: always zero
 *
 */
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar(10);
	return (0);
}
