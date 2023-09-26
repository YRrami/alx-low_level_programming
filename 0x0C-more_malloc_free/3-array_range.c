#include "main.h"
#include <stdlib.h>


/**
 *array_range - the func
 *@min: min value
 *@max: max value
 *Return: NULL
 */

int *array_range(int min, int max)
{
	int size;
	int *ptr;
	int numbers;

	if (min > max)
		return (NULL);
	numbers = (max - min) + 1;
	ptr = malloc(numbers * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
		for (size = 0; size < numbers; size++)
		{
			ptr[size] = min++;
		}
		return (ptr);
}
