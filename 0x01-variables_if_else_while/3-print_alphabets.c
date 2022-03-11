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
	char lettersLower = 'a';
	char lettersUpper = 'A';

	while(lettersLower <= 'z')
	{
		putchar(lettersLower);
		lettersLower++;
	}
	while(lettersUpper <= 'Z')
	{
		putchar(lettersUpper);
		lettersUpper++;
	}
	putchar(10);
	return (0);
}
