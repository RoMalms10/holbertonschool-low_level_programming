#include "holberton.h"

/**
  * get_bit - checks if a bit at the index is a 1 or a 0
  * @n: the number to check
  * @index: the spot in the number n to check
  * Return: a 1 if the number at the index is a 1, 0 otherwise
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	n = n >> index;
	return (n & 1);
}
