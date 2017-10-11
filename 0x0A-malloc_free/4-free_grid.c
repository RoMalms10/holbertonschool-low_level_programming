#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees memory allocated to the grid array
  * @grid: the array to free
  * @height: the amount of row to free
  * Return: Nothing, void
  */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;
	height -= 1; /*to start at 3 and go to 0*/
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
