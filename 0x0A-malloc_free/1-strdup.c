#include "holberton.h"
#include <stdio.h>
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
	ptr = malloc(sizeof(char) * count);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		ptr[i] = str[i];
	return (ptr);
}
