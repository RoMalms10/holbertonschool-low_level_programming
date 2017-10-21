#include "holberton.h"

/**
  * _isalpha - returns 1 if char c is an alphabetic character
  * @c: c gets compared to the ASCII values of alphabetical characters
  * Return: 1 if c is alphabetical, 0 if it's not
  */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
