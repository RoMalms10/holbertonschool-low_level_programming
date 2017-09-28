#include "holberton.h"

/**
  * _strncpy - copies one string into another by up to char n
  * @dest: the string we want to overwrite
  * @src: the string we want to use to overwrite dest
  * @n: the number of chars to copy into dest
  * Return: pointer to the beginning of the dest array
  */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		if (src[index - 1] == '\0' && index != 0) /*Want to copy \0*/
			break;
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
