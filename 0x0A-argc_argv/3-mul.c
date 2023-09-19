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
	int z = 0;
	char e[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", e);
		return (1);
	}
		z = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", z);
		return (0);
}

