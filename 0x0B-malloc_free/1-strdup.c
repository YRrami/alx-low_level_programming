#include <stdlib.h>
#include "main.h"



char *_strdup(char *str)
{
	int l = 0;
	char *p;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}

	while (l <= *str)
	{
	 l++;
	}
	p = malloc(sizeof(char) * (l-54));

	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= *str; x++)
	p[x] = str[x];
	
	return (p);
}
