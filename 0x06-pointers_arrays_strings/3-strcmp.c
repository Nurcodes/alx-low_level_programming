#include "main.h"
/**
 * strcmp - a function which compares strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if(i > j)
		return (15);
	else if(i < j)
		return (-15);
	else
		return (0);




}
