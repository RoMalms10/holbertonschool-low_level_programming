#include "search_algos.h"

/**
  * binary_search - finds the value passed in the array that's passed
  * by sending off the values to a helper recursive function
  * @array: the array to search through
  * @size: the size of the array
  * @value: the value looking for
  * Return: the index of the value in the array, or -1 if none
  */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_helper(array, 0, size - 1, value));


}

/**
  * binary_search_helper - recursively checks the array until the
  * value is found  by cutting the array in half each check
  * @array: the array to seach
  * @lo: the lowest point in the array to start at
  * @hi: the highest point in the array to go to
  * @value: the value looking for
  * Return: the index of the value in the array, or -1 if none
  */
int binary_search_helper(int *array, size_t lo, size_t hi, int value)
{
	size_t mid;
	size_t index;

	if (lo <= hi)
	{
		/* Print the array to search through */
		printf("Searching in array: ");
		for (index = lo; index < hi; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		/* Find midpoint */
		mid = lo + ((hi - lo) / 2);

		/* Check if midpoint is the value */
		if (array[mid] == value)
			return (mid);
		/* Look at the right side of the array */
		else if (array[mid] < value)
			return (binary_search_helper(array, mid + 1, hi, value));
		/* Look at the left side of the array */
		else if (array[mid] > value)
			return (binary_search_helper(array, 0, mid - 1, value));
	}
	return (-1);
}
