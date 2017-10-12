#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array of nmemb elements of size bytes
  * @nmemb: the amount of array eleltns
  * @size: the size of bytes of each element
  * Return: pointer to the newly allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
