#include "holberton.h"

/**
  * rev_string - reverses the string
  * @s: the string passed to get reversed
  * Return: Nothing, void
  */

void rev_string(char *s)
{
	int x, y;
	char c;

	x = 0;
	y = 0;
	while (s[x])
		x++;
	x = x - 1;
	while (x > y)
	{
		c = s[y];
		s[y] = s[x];
		s[x] = c;
		x--;
		y++;
	}
}
