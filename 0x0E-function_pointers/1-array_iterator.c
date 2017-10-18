#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - passes elements of an array to a function for printing
  * @array: the array to pass elements from
  * @size: how many elements to pass
  * @action: points to the function that gets passed
  * Return: nothing, void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]); /*Pass each integer one at a time to function*/
}
