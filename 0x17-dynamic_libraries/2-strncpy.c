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

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	for (; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
