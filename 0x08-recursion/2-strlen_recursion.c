#include "main.h"


/**
 *_strlen_recursion - is a func
 *@s: strimg
 *Return: x
 */

int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (*s > '\0')
	{
		x = _strlen_recursion(s + 1) + 1;
	}
	return (x);
}
