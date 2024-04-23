#include "main.h"


/**
 *print_rev - returns the string in reverse
 *@s: char
 */
void print_rev(char *s)
{
	int x;
	int y;
	int r;


	r = 0;
	while (s[r] != '\0')
	{
		r++;
	}

	y = r;

	for (x = y - 1; x >= 0 ; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
