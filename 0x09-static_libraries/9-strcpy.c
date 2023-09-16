#include "main.h"
#include <stdio.h>
/**
 * _strcpy - functions
 * @dest: dest
 * @src: src
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
		{
			break;
		}
		x++;
	}
	return (dest);
}
