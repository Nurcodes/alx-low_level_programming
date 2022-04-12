#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: struct to be printed
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
