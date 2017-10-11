#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - allocates memory for a simulation of a 2D array
  * @width: The amount of columns in the grid
  * @height: The amount of rows
  * Return: The double array pointing to the grid
  */

int **alloc_grid(int width, int height)
{
	int **array;
	int row, column, i;

	if (width == 0 || height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height); /*make an array of pointers*/
	if (array == NULL) /*This allows for array[i]*/
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++) /*create the "second" part of 2D array*/
	{
		array[i] = malloc(sizeof(int) * width); /*allows array[i][j]*/
		if (array[i] == NULL)
		{
			free(array);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			array[row][column] = 0;
	}
	return (array);
}
