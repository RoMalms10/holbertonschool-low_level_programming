#include "sort.h"

/**
  * selection_sort - sorts an array with the selection sort method
  * @array: the array to sort
  * @size: size of the array
  * Return: nothing, void
  */
void selection_sort(int *array, size_t size)
{
	size_t iterations;
	size_t index;
	size_t lowest_at_index;
	int compare_number;
	int temp;

	for (iterations = 0; iterations < size; iterations++)
	{
		compare_number = array[iterations];
		for (index = iterations; index < size; index++)
		{
			if (compare_number > array[index])
			{
				compare_number = array[index];
				lowest_at_index = index;
			}
		}
		temp = array[iterations];
		if (temp != compare_number)
		{
			array[iterations] = array[lowest_at_index];
			array[lowest_at_index] = temp;
			print_array(array, size);
		}
	}
}
