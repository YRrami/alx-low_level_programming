#include "main.h"
#include <math.h>

/**
 *_sqrt_recursion - func
 *@n: string
 */  


int _sqrt_recursion(int n)
{
	int r;

	r = sqrt(n);
	if (r * r == n)
	{
		return(n);
	}
	else
	{
		return(-1);
	}
}
