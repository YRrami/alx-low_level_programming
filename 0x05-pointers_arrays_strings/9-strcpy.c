#include "main.h"

/**
 * *_strcpy - copies the string that pointed
 * @dest: pointer to buffer
 * @src: string to cop
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (src[x] != '\0')
	{
		x = x + 1;
	}

	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}
