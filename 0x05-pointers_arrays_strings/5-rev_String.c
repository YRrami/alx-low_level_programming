#include "main.h"


/**
 * rev_String - reverse strings
 * @s: string variable
 */

void rev_String(char *s)
{
	char x;
	int y;
	int length = 0;
	int length2 = 0;

	while (s[length] != '\0')
	{
		length = length + 1;
	}
	length2 = length - 1;

	for (y = 0; y < length / 2; y++)
	{
		x = s[y];
		s[y] = s[length2];
		s[length2--] = x;
	}





}
