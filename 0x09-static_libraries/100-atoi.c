#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int cot = 0;
	unsigned int size = 0; 
	unsigned int z = 0;
	unsigned int t = 1;
	unsigned int y = 1;
	unsigned int x;

	while (*(s + cot) != '\0')
	{
		if (size > 0 && (*(s + cot) < '0' || *(s + cot) > '9'))
		{
			break;
		}
		if (*(s + cot) == '-')
		{
			t *= -1;
		}

		if ((*(s + cot) >= '0') && (*(s + cot) <= '9'))
		{
			if (size > 0)
			{
				y *= 10;
			}
			size++;
		}
		cot++;
	}

	for (x = cot - size; x < cot; x++)
	{
		z = z + ((*(s + x) - 48) * y);
		y /= 10;
	}
	return (z * t);
}
