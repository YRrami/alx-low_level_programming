#include <unistd.h>


#include <unistd.h>

/**
 * _putchar - writes the character 
 * @c: The char
 * Return: wewe
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
