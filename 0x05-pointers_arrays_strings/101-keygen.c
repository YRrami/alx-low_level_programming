#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - is a cool function
 *Return: 0
 */

int main(void)
{
	int chess[100];
	int x;
	int s;
	int rr;

	s = 0;
	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		chess[x] = rand() % 78;
		s += (chess[x] + '0');
		putchar(chess[x] + '0');
		if ((2772 - s) - '0' < 78)
		{
			n = 2772 - s - '0';
			s += rr;
			putchar(rr + '0');
			break;
		}
	}

	return (0);
}
