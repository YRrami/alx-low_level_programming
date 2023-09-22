#include "main.h"
#include <stdlib.h>

/**
 *_strdup - func
 *@str: int
 *Return: test
 */

char *_strdup(char *str)
{
	char *d;
	int x;
	int l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		l++;
	}

	d = malloc((l + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		d[x] = str[x]
	}
	d[l] = '\0';

	return (d);
}

