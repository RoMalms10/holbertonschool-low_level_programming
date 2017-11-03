#include "holberton.h"

/**
  * clear_bit - changes a bit at a specified location to 0
  * @n: the number to look through and change a bit to 0
  * @index: the location in the number n to change to 0
  * Return: 1 if the program succeeded, -1 if it failed
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = *n & ~mask;
	return (1);
}
