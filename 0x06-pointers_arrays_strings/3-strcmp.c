#include "main.h"
/**
 * _strcmp - a function which compares strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int score;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}

	score = s1[i] - s2[i];

	return (score);



}
