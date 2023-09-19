#include <stdio.h>
#include <stdlib.h>

/**
 *main -func
 *@argc: dwad
 *@argv:ss
 *Return: ddwa
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;
	(void)argc;

	if (argv[0])
	{
		printf("Error \n");
		return (1);
	}
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d\n", z);
		return (0);
}

