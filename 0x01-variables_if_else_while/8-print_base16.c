#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 *
 *
 * Return: Always(0) Success
 *
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	} for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
