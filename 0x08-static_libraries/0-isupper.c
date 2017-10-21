#include "holberton.h"

/**
  * _isupper - Takes an ASCII value of a char and checks if it's uppercase
  * @c: The ASCII value to be checked
  * Return: 1 for true (is uppercase) or 0 for false
  */

int _isupper(int c)
{
	return ((c <= 'Z' && c >= 'A'));
}
