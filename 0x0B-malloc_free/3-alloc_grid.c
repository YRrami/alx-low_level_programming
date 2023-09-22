#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - func
 *Description: desc
 *@width: int
 *@height: int
 *Return: null
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int x;
	int z;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}
	g = malloc(height * sizeof(*g));
	if (g == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
	g[x] = malloc(width * sizeof(**g));
	if (g[x] == NULL)
	{
	for (x--; x >= 0; x--)
	{
	free(g[i]);
	}
	free(g);
	return (NULL);
	}
	for (z = 0; z < width; z++)
	{
	g[x][z] = 0;
	}
	return (g);
}
