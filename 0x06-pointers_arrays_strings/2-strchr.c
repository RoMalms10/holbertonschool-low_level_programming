#include "holberton.h"

/**
  * _strchr - finds the first instance of a char in a string
  * @s: the string we want to search
  * @c: the char we want to find
  * Return: a pointer to the first instance of the char c
  */

char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	ptr = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (ptr + i);
	}
	if (c == '\0')
		return (ptr + i);
	return (NULL);
}
