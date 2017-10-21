#include "holberton.h"

/**
  * _isdigit - Takes an ASCII value c and checks if it's a digit
  * @c: the "char" to be evaluated
  * Return: 1 for true (is a digit) or 0 for false
  */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
