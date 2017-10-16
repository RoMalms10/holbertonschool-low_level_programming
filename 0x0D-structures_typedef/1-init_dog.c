#include "dog.h"

/**
  * init_dog - Assigns values passed to a struct
  * @d: The struct to write to
  * @name: The name of the dog
  * @age: The age of the dog
  * @owner: The dogs' owners' name
  * Return: void, nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
