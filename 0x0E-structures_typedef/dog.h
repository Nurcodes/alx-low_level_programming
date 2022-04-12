#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - first struct
 * @name: first
 * @age: second
 * @owner: third
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
