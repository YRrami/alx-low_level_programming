#include <stdio.h>
#include <stdlib.h>


/**
 *main - sdaw
 *@argc: hello
 *@argv: hp
 *Return: void
 */


int main(int argc, char *argv[])
{
	int s, r, i;
	char c[] = "Error";
	char *fabric;

	s = 0;
	r = 0;
	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			fabric = argv[i];
			while (*fabric != 0)
			{
				if (*fabric < 47 || *fabric > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				fabric++;
			}
			r = atoi(argv[i]);
			s += r;
		}
		printf("%d\n", s);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
