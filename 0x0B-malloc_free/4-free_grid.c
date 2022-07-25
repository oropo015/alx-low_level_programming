#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function 
 * @grid: input
 * @height: input
 * Return: frees the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
