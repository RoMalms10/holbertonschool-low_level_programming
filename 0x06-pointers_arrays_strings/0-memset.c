#include "holberton.h"

/**
  * _memset - Initializes the designated amount of bytes as a certain char
  * @s: The desired array to be set
  * @b: What to fill the array with
  * @n: The amount of bytes to be written
  * Return: The pointer to the first element in an array
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
