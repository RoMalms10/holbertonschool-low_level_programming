#include <stdio.h>

/**
  * main - Entry Point
  * Keeps dividing until it reaches the largest prime number
  * Return: Nothing, void
  */

int main(void)
{
	long int n, var, largest;

	var = 612852475143;
	n = 2;
	while (n != var)
	{
		while (var % n == 0)
		{
			var = var / n;
			largest = var;
		}
		n++;
	}
	printf("%ld\n", largest);
	return (0);
}
