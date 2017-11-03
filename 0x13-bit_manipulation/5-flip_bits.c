#include "holberton.h"

/**
  * flip_bits - counts how many numbers need to be flipped in n to become m
  * @n: the original number
  * @m: the number that n would turn in to
  * Return: the number of bits that would need to be flipped for n to become m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	count = 0;
	result = n ^ m;
	while (result != 0)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
