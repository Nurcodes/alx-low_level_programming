#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - f
 * @name: string
 * @f: pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
