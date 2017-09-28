#include "holberton.h"

/**
  * reverse_array - reverse an array of integers
  * @a: the array of integers we will reverse
  * @n: the size of the array (a)
  * Return: Nothing, void
  */

void reverse_array(int *a, int n)
{
	int half, end, temp, index;

	half = n / 2;
	end = n - 1;
	temp = index = 0;
	while (index < half)
	{
		temp = a[index];
		a[index] = a[end];
		a[end] = temp;
		index++;
		end--;
	}
}
