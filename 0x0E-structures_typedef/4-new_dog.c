#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
void fillmem(char *str, int strLen, char *dest);

/**
 * new_dog - function
 * @name: n
 * @age: a
 * @owner: o
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int nameLen, ownerLen;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	nameLen = _strlen(name);
	ptr->name = malloc(sizeof(char) * nameLen + 1);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		return (NULL);
	}

	fillmem(name, nameLen, ptr->name);

	ownerLen = _strlen(owner);
	ptr->owner = malloc(sizeof(char) * ownerLen + 1);
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	fillmem(owner, ownerLen, ptr->owner);

	ptr->age = age;

	return (ptr);
}

/**
 * _strlen - get length
 *
 * @str: string
 *
 * Return: length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * fillmem - copy string to allocated memory
 *
 * @str: string literal
 *
 * @strLen: length
 *
 * @dest: dest
 */

void fillmem(char *str, int strLen, char *dest)
{
	int i;

	for (i = 0; i < strLen; i++)
	{
		dest[i] = str[i];
	}

	dest[i] = '\0';
}
