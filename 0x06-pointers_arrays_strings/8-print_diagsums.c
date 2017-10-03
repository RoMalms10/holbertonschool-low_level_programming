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

	max = size * size;
	i = sum = 0;
	while (i < max)
	{
		sum = sum + a[i];
		if (i == (max - 1))
		{
			printf("%d, ", sum);
			break;
		}
		i = i + (size + 1);
	}
	sum = 0;
	while (i >= (size - 1))
	{
		i = i - (size - 1);
		sum = sum + a[i];
		if (i == (size - 1))
		{
			printf("%d\n", sum);
			break;
		}
	}
}
