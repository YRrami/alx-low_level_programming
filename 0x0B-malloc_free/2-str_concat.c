#include "main.h"
#include <stdlib.h>



/**
 *str_concat - func
 *@s1: star
 *@s2: star
 *Return: null
 */


char *str_concat(char *s1, char *s2)
{
	int i;
	int c = 0;
	int length = 0;
	char *costar;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}
	costar = malloc(sizeof(char) * length);
	if (costar == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		costar[c++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		costar[c++] = s2[i];
	}
	return (costar);
}
