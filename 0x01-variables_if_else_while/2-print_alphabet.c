#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter != 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	puts("\n");
	return (0);

}
