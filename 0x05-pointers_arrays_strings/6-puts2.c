#include "main.h"


/**
 * puts2 - prints one char out of two
 * @str: string
 */
void puts2(char *str)
{
	int length = 0;
	int x;

	while (str[length] != '\0')
	{
		length = length + 1;
	}
	for (x = 0; x < length; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
