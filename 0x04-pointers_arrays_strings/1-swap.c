#include "holberton.h"

/**
  * swap_int - takes two memory addresses and swaps what's stored there
  * @a: passed a memory location to be swapped with b
  * @b: passed a different memory location
  * Return: Nothing, void
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b; /* Need to hold the value while swapping */
	*b = *a;
	*a = temp;
}
