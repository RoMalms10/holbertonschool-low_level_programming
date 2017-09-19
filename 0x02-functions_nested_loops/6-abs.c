#include "holberton.h"

/**
  * _abs - Prints a number's absolute value
  * @n: Changed to the absolute value
  * Return: n which would be the absolute number
  */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
}
