#include "holberton.h"

/**
  * set_string - redirects a pointer to a different location
  * @s: a pointer to a pointer to a string
  * @to: what you want to redirect to
  * Return: nothing, void
  */

void set_string(char **s, char *to)
{
	*s = to; /*redirects the first pointer to point at the memory to is*/
}
