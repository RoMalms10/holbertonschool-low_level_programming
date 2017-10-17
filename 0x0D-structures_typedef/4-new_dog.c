#include "dog.h"
#include <stdlib.h>

/**
  * _strdup - duplicates a string
  * @str: the string to duplicate
  * Return: NULL if malloc fails or if str is NULL, else pointer to new string
  */


char *_strdup(char *str)
{
	char *ptr;
	int i, count;

	count = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}


/**
  * new_dog - Creates a new dog out of passed parameters
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Owner of the dog
  * Return: The pointer to the new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_hold;
	char *owner_hold;
	dog_t *Luna;

	name_hold = _strdup(name);
	if (name_hold == NULL)
		return (NULL);
	owner_hold = _strdup(owner);
	if (owner_hold == NULL)
		return (NULL);
	Luna = malloc(sizeof(dog_t));
	if (Luna == NULL)
		return (NULL);
	Luna->name = name_hold;
	Luna->age = age;
	Luna->owner = owner_hold;
	return (Luna);
}
