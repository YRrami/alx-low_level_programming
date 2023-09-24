#include "main.h"

/**
 * malloc_checked - func
 * @b: unsigned int
 * Return: x
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}