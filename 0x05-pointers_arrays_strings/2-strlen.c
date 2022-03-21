#include "main.h"
/**
 *_strlen - a function which gets the length of a string
 *@s: letter being tested
 *Return: Always 0
 */
int _strlen(char *s)
{
	int n;
	int len = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		len++;
	}

	return (len);
}
