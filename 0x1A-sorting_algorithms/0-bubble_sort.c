#include "sort.h"

/**
  * bubble_sort - sorts an array using bubble-sort style
  * @array: the array to sort
  * @size: the size of the array
  * Return: nothing
  */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t flag;
	int temp = 0;
	size_t times = 1;

	while (1)
	{
		flag = 0;
		for (i = 0; i < (size - times); i++)
		{
			if (array[i] > array[i + 1])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		times++;
	}
}
