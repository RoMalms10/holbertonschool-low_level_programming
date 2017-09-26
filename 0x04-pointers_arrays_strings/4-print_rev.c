#include "holberton.h"

/**
  * print_rev - prints a string in reverse
  * @s: the string passed to the function
  * Return: Nothing, void
  */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
