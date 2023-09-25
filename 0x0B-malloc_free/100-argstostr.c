#include <stdio.h>
#include <stdlib.h>


/*
 *argstostr - hello
 *@ac: hello
 *@av: hello
 *Return: hello
 */

char *argstostr(int ac, char **av)
{
	int x,y,z;
	char *res, *mod;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}

		while (x < ac)
		{
			mod = av[x];
			while (*mod)
			{
				z++;
				mod++;
			}
			z++;
			mod++;
		}
		res = malloc(z + 1);
		i = 0;
			while (x < ac)
			{
				mod = av[x];
				while (*new)
				{
					res[y] = *new;
					mod++;
					y++
				}
				res[y]= '\n';
				y++;
				x++;
			}
			res[z + 1] = '\0';
			return (res);

}
