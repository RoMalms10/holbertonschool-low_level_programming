#include "holberton.h"
#include <stdio.h>

/**
  * print_array - Prints n elements of an array in order based on number passed
  * @a: the array passed
  * @n: specifies how many elements to print
  * Return: Nothing, void
  */

void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
		x++;
	}
	printf("\n");
}
