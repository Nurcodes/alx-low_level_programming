#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int a;
	char Fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char Fizzbuzz[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
			printf("%s ", Fizzbuzz);
		else if (a % 3 == 0 && a % 5 != 0)
			printf("%s ", Fizz);
		else if (a % 5 == 0 && a % 3 != 0)
			printf("%s ", buzz);
		else
			printf("%d ", a);
	}
	return (0);
}
