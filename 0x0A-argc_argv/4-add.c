#include <stdio.h>
#include <stdlib.h>

/**
 * main - f
 * @argc: 1
 * @argv: 2
 * Return: 0
 */

int main(int argc, char **argv)
{
	long int sum = 0;
	int i;

	int is_int(char **s);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%li\n", sum);
	} else
		is_int(argv);
	return (0);

}

/**
 * is_int - funtion to check whether an int
 * @s: string being checked
 * Return: 0
 */



int is_int(char **s)
{
	int o = 0;

	while (*s[o] != '\0')
	{
		if (*s[o] < '0' || *s[o] > '9')
		{
			printf("0\n");
			break;
		}
		else
			return (0);
		o++;
	}
	return (0);
}
