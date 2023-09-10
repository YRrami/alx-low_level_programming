#include "main.h"



/**
 *_puts - print string to stdout
 *@str: pointer to string
 */
void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		++x;
		_putchar(str[x]);
	}
	_putchar('\n');
}
