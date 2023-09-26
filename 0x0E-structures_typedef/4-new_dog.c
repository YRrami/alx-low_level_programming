#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - funco
 * @name: types
 * @age: typed
 * @owner: typex
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *marcos;
	char *i, *j;
	int x, y, z;

	techie = malloc(sizeof(struct dog));
	if (marcos == NULL)
		return (NULL);

	for (x = 0; *(name + x) != '\0'; x++)
		;
	for (y = 0; *(owner + y) != '\0'; y++)
		;
	i = malloc(sizeof(char) * x + 1);
	if (i == NULL)
	{
		free(marcos);
		return (NULL);
	}
	j = malloc(sizeof(char) * y + 1);
	if (j == NULL)
	{
		free(i);
		free(marcos);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
	{
		*(i + z) = *(name + z);
	}
	for (z = 0; z <= y; z++)
	{
		*(j + z) = *(owner + z);
	}
	marcos->name = i;
	marcos->age = age;
	marcos->owner = j;

	return (marcos);
}
