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
	int j = 0;
	int s1_size;
	int s2_size;
	int score;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	s1_size = i;
	s2_size = j;

	if (s2_size > s1_size)
		score = -1;
	else if (s2_size < s1_size)
		score = 1;
	else
		score = 0;

	return (score);


}
