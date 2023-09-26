#include "main.h"
#include <stdlib.h>



/**
 * _realloc - Reallocates a memory
 *@ptr: s
 *@old_size: s
 *@new_size: s
 *Return:s
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *ptr_copy;
	char *looper;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
			if (p == NULL)
			{
				return (NULL);
			}
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	p = malloc(sizeof(*ptr_copy) * new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}

	looper = p;
	for (x = 0; x < old_Size && new_size; x++)
	{
		looper[x] = *ptr_copy++;
	}
	free(ptr);
	return (p);
}
