#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - creates newly allocated space based on a value passed
  * @b: the size to allocate
  * Return: a pointer of type void, pointing to the newly allocated space
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
