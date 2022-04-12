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
	dog_t *ptr;

	if (name == NULL || owner == NULL || age == 0)
		exit(1);

	while (n[i] != '\0')
	{
		i++;
	}
	while (o[b] != '\0')
	{
		b++;
	}
	ptr = malloc(sizeof(dog_t) + (i + b + 2) + sizeof(float));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
