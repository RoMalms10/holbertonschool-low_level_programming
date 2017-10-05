#include "holberton.h"

int calc(int n, int counter);

/**
  * _sqrt_recursion - find the square root of a number
  * @n: the number we are trying to find the square root
  * Return: the value of the square root
  */

int _sqrt_recursion(int n)
{
	int counter, t;

	counter = 1;
	if (n < 0)
		return (-1);
	t = calc(n, counter);
	return (t);
}

/**
  * calc - Calculates th square root by incrementing counter and comparing to n
  * @n: The number we want to find the square root of
  * @counter: the number we square and then compare to n
  * Return: The value of counter if it was successful, or -1 if not successful
  */

int calc(int n, int counter)
{
	if ((counter * counter) == n) /*Successfully found square root*/
		return (counter);
	if ((counter * counter) > n) /*testing to see if we passed n*/
		return (-1);
	return (calc(n, counter + 1)); /*function calls collapse to return val*/
}
