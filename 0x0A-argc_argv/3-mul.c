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

	int i;
	long int sum = 1;
	long int num;


	if (argc > 1 && argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			sum *= num;
		}
		printf("%li\n", sum);
	} else
		printf("Error\n");

	return (0);
}
