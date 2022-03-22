#include "main.h"
/**
 * rev_string - a function which reverses a string
 * @s: letter being tested
 * Return: Always 0
 */
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	int c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}

	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
