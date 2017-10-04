#include "holberton.h"

/**
  * _print_rev_recursion - Print a string backwards
  * @s: the string to print backwards
  * Return: nothing, void
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0') /*does recursion and print as long as *s isn't \0*/
	{
		_print_rev_recursion(s + 1); /*opens new function b4 printing*/
		_putchar(*s);
	}
}
