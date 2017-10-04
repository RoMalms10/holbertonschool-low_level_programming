#include "holberton.h"

/**
  * factorial - find the factorial of a number (3! = 3*2*1)
  * @n: the number we want to use for the factorial
  * Return: the value of the facotrial
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
