#include <stdio.h>
#include <stdlib.h>


/**
 *argstostr - helloo
 *@ac: hello
 *@av: hello
 *Return: hello
 */

char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, z = 0;
	char *res, *mod;

	if (ac == 0 || av == NULL)
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
			x++;
		}
		res = malloc(z + 1);
		x = 0;
			while (x < ac)
			{
				mod = av[x];
				while (*mod)
				{
					res[y] = *mod;
					mod++;
					y++;
				}
				res[y] = '\n';
				y++;
				x++;
			}
			res[z + 1] = '\0';
			return (res);

}
