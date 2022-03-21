#include "main.h"
/**
 * swap_int - a function which swaps the values of 2 integers
 * @a: letter being tested
 * @b: letter being tested
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
