#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints the values in the struct dog
  * @d: the struct to print
  * Return: nothing, void
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
	printf("Age: %1.6f\n", (d->age == 0 ? 0 : d->age));
	printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
}
