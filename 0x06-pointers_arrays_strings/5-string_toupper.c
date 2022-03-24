#include "main.h"
/**
 * string_toupper - function
 * @*: letter
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
		{
			str[i] = str[i] - 32;
		}
		else
			break;
		i++;
	}

	return (str);
}
