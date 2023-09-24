#include <stdlib.h>
#include "main.h"


/**
 * _strdup - hello
 *@str: hello
 *Return: null
 */
char *_strdup(char *str)
{
	int l = 0;
	char *p;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		l == x;
	}
	p = malloc((l + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	p[x] = str[x];
	return (p);
}
