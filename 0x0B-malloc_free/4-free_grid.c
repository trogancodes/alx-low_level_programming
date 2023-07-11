#include "main.h"
#include <stdlib.h>
/**
 * free_grid - sdfg
 * @grid: sdfg
 * @height: sdfg
 * Return: sdfg
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
