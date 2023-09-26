#include "main.h"
#include <stdlib.h>

/**
 *_calloc - the function
 *@nmemb: array
 *@size: var
 *Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int x;
	char *arra;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
		ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	arra = ptr;
	for (x = 0; x < (nmemb * size); x++)
		arra[x] = '\0';

	return (ptr);
}
