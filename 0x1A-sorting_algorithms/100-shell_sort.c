#include "sort.h"

/**
  * shell_sort - sorts an array using shell implementation
  * @array: the array to sort
  * @size: the size of the array
  * Return: nothing, void
  */
void shell_sort(int *array, size_t size)
{
	int temp;
	int gap;
	int index;
	int index_2;
	int arr_size = size;

	if (array == NULL || size < 2)
		return;

	gap = 1;
	while (gap < arr_size)
		gap = ((gap * 3) + 1);
	gap = ((gap - 1) / 3); /*Decrement once because 1 iteration over now*/

	while (gap > 0)
	{
		index = 0;
		while ((index + gap) < arr_size)
		{
			if (array[index] > array[index + gap])
			{
				temp = array[index];
				array[index] = array[index + gap];
				array[index + gap] = temp;
				index_2 = index;
				while ((index_2 - gap) > 0 && array[index_2]
						< array[index_2 - gap])
				{
					temp = array[index_2];
					array[index_2] = array[index_2 - gap];
					array[index_2 - gap] = temp;
					index_2--;
				}
			}
			index++;
		}
		print_array(array, size);
		gap = ((gap - 1) / 3);
	}
}
