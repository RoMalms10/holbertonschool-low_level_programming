#include "holberton.h"
#include <stdio.h>

/**
  * print_diagsums - add and print numbers if they are in diagonals
  * @a: the array we look through
  * @size: the size of the array (size by size)
  * Return: nothing, void
  */

void print_diagsums(int *a, int size)
{
	int i, sum, max;

	max = size * size; /*size of array - size by size square*/
	i = sum = 0;
	while (i < max)
	{
		sum = sum + a[i];
		if (i == (max - 1)) /*reached end of diagonal - bottom right*/
		{
			printf("%d, ", sum);
			break;
		}
		i = i + (size + 1); /*add after because you start top left*/
	}
	sum = 0;
	while (i >= (size - 1))
	{
		i = i - (size - 1); /*subtract first to get to bottom left*/
		sum = sum + a[i];
		if (i == (size - 1)) /*reached end of diagonal - top right*/
		{
			printf("%d\n", sum);
			break;
		}
	}
}
