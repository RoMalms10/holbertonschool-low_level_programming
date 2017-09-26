#include "holberton.h"

/**
  * puts_half - prints the last half of the array passed
  * @str: is passed an array
  * Return: Nothing, void
  */

void puts_half(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	if (x % 2 != 0)
		x = (x + 1) / 2; /*Add 1: decrease length of odd string half*/
	else
		x = x / 2;
	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
