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

	for (x = 0; x <= *str; x++)
	{
		l++;
	}
	p = malloc((l ) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++) 
	p[x] = str[x];
	
	return (p);
}
