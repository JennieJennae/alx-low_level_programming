#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees grid
 * @grid: 2d grid
 * @height: grid height
 * Description: frees memory of grid
 * Return: zero
 *
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
