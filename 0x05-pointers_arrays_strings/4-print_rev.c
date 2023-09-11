#include "main.h"


/**
 *print_rev - returns the string in reverse
 *@s: char
 *
 */
void print_rev(char *s)
{
	int x; 
	int y;
	int r;
	char z;

	r = 0;
	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	r = x - 1;

	for (y = 0; y < x / 2; y++)
	{
		z = s[y];
		s[y] = s[r];
		s[r--] = z;
	}
}
