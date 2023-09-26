#include "dog.h"
#include <stdio.h>

/**
 * init_dog - func
 * @d: dogoo
 * @name: c
 * @age: f
 * @owner: c
 * Return: v
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
