#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - prints a name based on what function is passed to it
  * @name: the name to print
  * @f: the function being passed, which is the format to print name
  * Return: nothing, void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
