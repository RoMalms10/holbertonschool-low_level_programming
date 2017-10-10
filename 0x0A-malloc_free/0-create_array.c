#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - Allocates space and assigns all the spaces a specific char
  * @size: The size of the array
  * @c: the char we want to assign to the entire array
  * Return: NULL if size is 0, otherwise a pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL) /*checks if malloc failed*/
		return (ptr);
	for (index = 0; index < size; index++)
		ptr[index] = c;
	return (ptr);
}
