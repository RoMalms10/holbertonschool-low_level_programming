#include "holberton.h"

/**
  * _strlen - passed a pointer to an array to count the length
  * @s: the string passed to count
  * Return: x, the value of how long the string is
  */

int _strlen(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
