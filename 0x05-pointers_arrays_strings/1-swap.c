#include "main.h"


/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int test;

	test = *a;
	*a = *b;
	*b = test;
}
