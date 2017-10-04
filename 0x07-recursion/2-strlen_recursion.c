#include "holberton.h"

/**
  * _strlen_recursion - finds string length recursively
  * @s: the string we want to find the length of
  * Return: the number of chars in string s
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
