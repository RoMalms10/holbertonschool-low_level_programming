#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - create an integer array from min to max
  * @min: the minimum value
  * @max: the maximum value
  * Return: pointer to the newly allocated integer array
  */

int *array_range(int min, int max)
{
	int *ptr;
	int count, k, i;

	count = k = 0;
	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		count++;
	ptr = malloc(sizeof(*ptr) * count);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[k] = i;
		k++;
	}
	return (ptr);
}
