#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - pritns numbers up or down to 98
  * @n: the number that gets printed and incremented to 98
  * Return: void
  */

void print_to_98(int n)
{
	while (n != 98) /* While not 98, do this loop, but increment to 98*/
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d\n", n);
}
