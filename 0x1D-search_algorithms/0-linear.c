#include "search_algos.h"

/**
  * linear_search - checks an array one by one until
  * the value in the array matches the passed value
  * @array: the array to search
  * @size: the size of the array
  * @value: the value to check for
  * Return: -1 if it isn't in the array, or if the array is NULL
  *         otherwie returns the index where the value was found
  */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
