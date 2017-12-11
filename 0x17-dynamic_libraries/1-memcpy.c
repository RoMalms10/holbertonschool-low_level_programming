#include "holberton.h"

/**
  * _memcpy - Copy what's written in an array to a destination array
  * @dest: Want to write to this array
  * @src: the source array
  * @n: The amount of chars to take from src and put into dest
  * Return: Pointer to the first element of the array dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
