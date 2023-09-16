#include "main.h"



/**
 *_puts - print string to stdout
 *@str: pointer to string
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
