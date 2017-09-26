#include "holberton.h"

/**
  * puts2 - takes an array and prints every other char
  * @str: the string passed to the array
  * Return: Nothing, void
  */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
