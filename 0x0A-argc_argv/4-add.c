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
	long int i;
	long int sum = 0;
	int flag;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			flag = 1;
			break;
		}
		else if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			sum += atoi(argv[i]);
		}
	}

	while (--argc)
	{
		if (*argv[argc] < '0' || *argv[argc] > '9')
		{
			printf("0\n");
			return (1);
		}
	}
	if (flag == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%li\n", sum);
	return (0);
}
