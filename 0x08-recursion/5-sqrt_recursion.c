#include "main.h"
#include <math.h>


int real_recursion(int n, int x);


/**
 *_sqrt_recursion - function
 *
 *@n: number
 *Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		return (real_recursion(n, 0));
}


/**
 *real_recursion - function
 *@n: int
 *@x: int
 *Return: n
 */
int real_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	return (real_recursion(n, x + 1));
}
