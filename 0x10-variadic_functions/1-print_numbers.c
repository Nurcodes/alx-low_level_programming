#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers with seperator
 *
 * @separator: string separator
 *
 * @n: number of arguements
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(args, int), separator);
			} else
			{
				printf("%d", va_arg(args, int));
			}
		}
		printf("%d", va_arg(args, int));
		va_end(args);
	}
	printf("\n");
}
