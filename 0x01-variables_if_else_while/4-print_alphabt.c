#include <stdio.h>
#include <stdlib.h>
/**
 * main - Alphabet without q and e
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
