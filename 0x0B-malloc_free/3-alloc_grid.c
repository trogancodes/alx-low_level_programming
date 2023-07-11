#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - dfg
 * @width: dfgh
 * @height: asdfg
 * Return: c
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (0);
	a = malloc(sizeof(int *) * height);
	if (a == 0)
	{
		free(a);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
	if (a[i] == 0)
	{
		for (j = i; j >= 0; j--)
		{
			free(a[j]);
		}
		free(a);
		return (0);
	}
	}
	for (k = 0; k < height; k++)
	{
	for (l = 0; l < width; l++)
	{
		a[k][l] = 0;
	}
	}
	return (a);
}
