#include "main.h"



/**
 *_puts - print string to stdout
 *@str: pointer to string
 */
void _puts(char *str)
{
	int x;

	x = 0;
	do {
		x++;
		_putchar(str[x]);
	} while (str[x] != '\0');
	_putchar('\n');
}
