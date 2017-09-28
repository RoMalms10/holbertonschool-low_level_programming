#include "holberton.h"

/**
  * _strncat - Adds a string to the end of an array up to length n
  * @dest: the array we want to add to
  * @src: the string we want to use to add
  * @n: How far in src to add to dest
  * Return: the pointer to the first spot in the dest array
  */

char *_strncat(char *dest, char *src, int n)
{
	int index, copy;

	copy = index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (copy < n && src[copy] != '\0')
	{
		dest[index] = src[copy];
		index++;
		copy++;
	}
	dest[index] = '\0';
	return (dest);
}
