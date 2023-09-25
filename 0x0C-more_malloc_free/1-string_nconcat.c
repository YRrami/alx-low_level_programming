#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - function that concatenates two strings
 * @s1: value 1
 * @s2: value 2
 * @n: value 3
 * Return: pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	n = len2;
	len2 = 0;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
	return (NULL);
	for (k = 0; k < len1; k++)
	{
		ptr[k] == s1[k];
	}
	for (; k < (len1 + n) ; k++)
	{
		ptr[k] = s2[k - len1];
	}
	ptr[k] = '\0';
	return (ptr);
}
