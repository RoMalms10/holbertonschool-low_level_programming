#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - Creates a new dog out of passed parameters
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Owner of the dog
  * Return: The pointer to the new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Luna;

	Luna = malloc(sizeof(dog_t));
	if (Luna == NULL)
		return (NULL);
	Luna->name = name;
	Luna->age = age;
	Luna->owner = owner;
	return (Luna);
}
