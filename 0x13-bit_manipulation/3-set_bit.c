#include "holberton.h"

/**
  * set_bit - sets a bit to 1 at the given index
  * @n: the pointer to the int
  * @index: the index at which to set to 1
  * Return: 1 if it succeeded, -1 if it failed
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (n == NULL)
		return (-1);
	if ((sizeof(unsigned long int) * 8) <= index)
		return (-1);
	set = 1;
	set = set << index;
	*n = *n | set;
	return (1);
}
