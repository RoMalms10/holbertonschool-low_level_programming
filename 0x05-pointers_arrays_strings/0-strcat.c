#include "holberton.h"

/**
  * _strcat - Adds a string to the end of an array
  * @dest: The array we want to add to
  * @src: The string we want to add to the array
  * Return: pointer to the first element of a string
  */

char *_strcat(char *dest, char *src)
{
	int index, copy;

	index = copy = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[copy] != '\0')
	{
		dest[index] = src[copy];
		index++;
		copy++;
	}
	dest[index] = '\0';
	return (dest);
}
