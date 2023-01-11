#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - entry point
 * @grid: matrix rows
 * @height: columns
 * Return: a pointer to a 2 dimensional array of integers
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
