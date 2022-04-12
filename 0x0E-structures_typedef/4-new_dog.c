#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function
 * @name: n
 * @age: a
 * @owner: o
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name;
	char *o = owner;
	int i = 0;
	int b = 0;
	int size;
	dog_t *ptr;

	while (n[i] != '\0')
	{
		i++;
	}
	while (o[b] != '\0')
	{
		b++;
	}

	size = i + b + 2;

	ptr = malloc(size + (sizeof(float)));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
