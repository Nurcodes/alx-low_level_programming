#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all digit characters of base 10
 *
 * Return: always zero
 *
 */
int main(void)
{
	int i, j;

	for (i = 0, j = 48; i < 10; i++, j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
