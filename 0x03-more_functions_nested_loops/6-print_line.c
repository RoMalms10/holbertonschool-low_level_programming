#include "holberton.h"

/**
  * print_line - Prints underscores based on the number passed through n
  * @n: indicates how many underscores to print
  * Return: Nothing, void
  */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
