#include "sort.h"

/**
  * quick_sort - implements quick sort on an array
  * @array: the array to sort
  * @size: the size of the array
  * Return: nothing, void
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, 0, (size - 2), size);
}

/**
  * lomuto_sort - sorts an array using quick sort lomuto partition
  * @array: the array to sort
  * @LP: the left pointer
  * @RP: the right pointer
  * @size: the size of the array
  * Return: nothing, void
  */
void lomuto_sort(int *array, int LP, int RP, size_t size)
{
	int Pivot = RP + 1;
	int temp;
	int L_moved = 0;

	if (LP > RP)
		return;
	while (LP < RP && LP != RP)
	{
		if (array[LP] > array[Pivot])
		{
			for (; LP < RP && LP != RP; RP--)
			{
				if (array[RP] < array[Pivot])
				{
					temp = array[LP];
					array[LP] = array[RP];
					array[RP] = temp;
					LP++;
					L_moved++;
					RP--;
					print_array(array, size);
					break;
				}
			}
		}
		else
		{
			LP++;
			L_moved++;
		}
	}
	if (array[LP] > array[Pivot])
	{
		temp = array[Pivot];
		array[Pivot] = array[LP];
		array[LP] = temp;
		print_array(array, size);
	}
	lomuto_sort(array, (LP - L_moved), (RP - 1), size); /*Left side recursion*/
	lomuto_sort(array, (LP + 1), (Pivot - 1), size); /*Right side recursion*/
}
