#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Frees dogs
  * @d: The pointer to the dog we want to free
  * Return: Nothing, void
  */

void free_dog(dog_t *d)
{
	free(d);
}
