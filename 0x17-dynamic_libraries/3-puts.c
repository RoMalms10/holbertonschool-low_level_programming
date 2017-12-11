#include "holberton.h"

/**
  * _puts - takes a string and prints it out letter by letter
  * @str: string that gets passed
  * Return: nothing, void
  */

void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
