#include "holberton.h"

/**
  * _strcpy - copies a string into an array
  * @dest: The destination, where you want to write the string to
  * @src: The source, the string you want to copy
  * Return: pointer to a char, in this case, the beginning of the string dest
  */

char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
