#include "main.h"

/**
 * puts_half - prints half of str
 * @str: string var
 */

void puts_half(char *str)
{
	int length = 0;
	int x;
	int y;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
	{
		for (y = length / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	else if (length % 2)
	{
		for (x = (length - 1) / 2; x < length - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar('\n');
}
