#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - Creates newly allocated space of size new_size and copies
  * original contents there and leaves new memory uninitialized
  * @ptr: the pointer to the old allocated space of memory
  * @old_size: The old size of the old allocated space
  * @new_size: The new size wanted in the newly allocated space
  * Return: pointer to the newly allocated space in memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *hold;
	unsigned int i;

	hold = (char *)ptr;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		old_size = new_size;
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i <= old_size; i++)
			p[i] = hold[i];
	}
	free(ptr);
	return (p);
}
