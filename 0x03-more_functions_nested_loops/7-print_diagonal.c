#include "holberton.h"

/**
  * print_diagonal - prints diagonal line
  * Prints line based on n number of lines and each line has i-1 spaces
  * @n: how many lines will print
  * Return: nothing, void
  */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
