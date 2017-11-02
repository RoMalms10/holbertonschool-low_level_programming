#include "holberton.h"

/**
  * binary_to_uint - converts binary to unsigned int using bitwise manipulation
  * @b: the string of chars to convert
  * Return: the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int product, index;

	if (b == NULL)
		return (0);
	index = product = 0;
	while (b[index] != '\0')
	{
		if (b[index] == '1')
		{
			product = product << 1;
			product = product | 1;
		}
		else if (b[index] == '0')
		{
			product = product << 1;
		}
		else
		{
			return (0);
		}
		index++;
	}
	return (product);
}
