#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *binary_to_uint - func
 *@b: var
 *Return: balance
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 1,
	range = 0,
	balance = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[range])
	{
		range++;
	}
	while (range)
	{
		if (b[range - 1] != '0' && b[range - 1] != '1')
		{
			return (0);
		}

		if (b[range - 1] == '1')
		{
			balance += num;
		}
		num *= 2;
		range--;
	}
	return (balance);
}
