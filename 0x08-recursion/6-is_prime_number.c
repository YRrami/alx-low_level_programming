#include "main.h"


/**
 *is_prime_number - func
 *@n : string
 *Return: the val
 */
int is_prime_number(int n)
{
	int r;

	r = n / 2;
	if (r + r == n || n % 10 == 5)
	{
		return (0);
	}
	else if (n <= 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (1);
	}
}
