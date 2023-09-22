#include "main.h"
#include <stdlib.h>

/**
 *create_array - func
 *@size: int
 *@c: int
 *Return: null
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int r;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(size * sizeof(*x));
	if (x == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < size; r++)
	{
		x[r] = c;
	}
	return (x);
}
