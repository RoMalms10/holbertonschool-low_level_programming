#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - Sends elements of an array to a function to be compared
  * @array: The array to send elements to a function
  * @size: the size of the array
  * @cmp: the function pointer to the function passed
  * Return: on success, return index in array, otherwise return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
