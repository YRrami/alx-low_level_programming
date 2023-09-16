#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: destination
 * @src: src
 * @n: int
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int cot = 0;
	int cot2 = 0;

	while (*(dest + cot) != '\0')
	{
		cot++;
	}

	while (cot2 < n)
	{
		*(dest + cot) = *(src + cot2);
		if (*(src + cot2) == '\0')
		{
			break;
		}
		cot++;
		cot2++;
	}
	return (dest);
}
