#include "holberton.h"

/**
  * _pow_recursion - raise a number to the power of another number
  * @x: The number we want to multiply
  * @y: the number we want to raise x to
  * Return: the value of the multiplication
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
