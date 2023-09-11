#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - is a cool function
 *Return: 0
 */

int main(void)
{
	int x,y,z;
    time_t t;
    
    srand((unsigned int) time(&t));
	for (x = 0 ;x <= 0 ; x++)
    {
	for (y = 0 ; y <= 35; y++)
	{
        z = rand() % (125 + 1 - 47);
        putchar(z + '0');
        }
	    
    }
	return (0);
}
