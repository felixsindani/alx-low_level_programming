#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: dimension
 * @height: dimennsion
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);

		if (p[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(p[b]);
			}
			free(p);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			p[c][d] = 0;
		}
	}
	return (p);
}
