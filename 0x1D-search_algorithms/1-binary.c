#include "search_algos.h"

/**
  *
  *
  *
  *
  *
  *
  */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_helper(array, 0, size, value));


}


int binary_search_helper(int *array, size_t lo, size_t hi, int value)
{
	size_t mid = 0;


}
