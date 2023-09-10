#include "main.h"



/**
 * _strlen - return the length of a string
 * @s: char
 *
 * Return: the numbers integer
 */
int _strlen(char *s)
{
	int numbers;

	for (numbers = 0; *s > '\0'; s++)

	++numbers;
	return (numbers);

}
