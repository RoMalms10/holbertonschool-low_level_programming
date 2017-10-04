#include "holberton.h"

/**
  * _puts_recursion - prints a string by calling the function recursively
  * @s: the string we want to print
  * Return: Nothing, void
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
