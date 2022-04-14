#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 *
 * @separator: 1
 *
 * @n: number of args
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list args;
	char *temp;

	va_start(args, n);

	if (n != 0)
	{
		while (i - 1 > 0)
		{
			temp = va_arg(args, char *);
			if (separator != NULL)
			{
				if (temp != NULL)
				{
					printf("%s%s", temp, separator);
				} else
				{
					printf("(nil)%s", separator);
				}
			} else
			{
				if (temp != NULL)
				{
					printf("%s", temp);
				} else
				{
					printf("(nil)");
				}
			}
			i--;
		}
		temp = va_arg(args, char *);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		va_end(args);
	}
	printf("\n");
}
