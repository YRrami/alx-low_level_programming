#include "main.h"

/**
 * *_strcat - function
 * @dest: pa po
 * @src: pa po
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int z;

	x = 0;
	z = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		z++;
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
