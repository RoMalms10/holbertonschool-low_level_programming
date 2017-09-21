#include "holberton.h"

/**
  * print_numbers - when called, will print zero through nine
  * Return: Nothing, void
  */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
