#include "holberton.h"

/**
  * calc - Calculates if n is divisible by something other than 1 and itself
  * @n: The number we are testing to see if it's a prime number
  * @ctr: The counter we are testing on n
  * Return: 0 if it's not a prime number, 1 if it is
  */

int calc(int n, int ctr)
{
	if (n == ctr)
		return (1);
	if (n % ctr == 0)
		return (0);
	return (calc(n, ctr + 1));
}

/**
  * is_prime_number - Checks if a number is prime
  * @n: The number we want to check if it's prime
  * Return: 0 if it's not ap rime number, 1 if it is
  */

int is_prime_number(int n)
{
	int ctr, t;

	ctr = 2;
	if (n < 2)
		return (0);
	t = calc(n, ctr);
	return (t);
}
