#include "holberton.h"

/**
  * print_triangle - prints a triangle from the right based on "size" lines
  * @size: used to determine how big the triangle is
  * Return: Nothing, void
  */

void print_triangle(int size)
{
	int i, j, k, square;

	for (i = 0; i < size; i++)
	{
		square = i + 1; /*To keep track of how many spaces (size -1)*/
		for (j = square; j < size; j++)
			_putchar(' ');
		for (k = 0; k < square; k++)
			_putchar ('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
