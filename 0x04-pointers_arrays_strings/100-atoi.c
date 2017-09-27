#include "holberton.h"

/**
  *
  *
  *
  *
  */

int _atoi(char *s)
{
	int x, hold, counter, negative, sign, number;
	unsigned int final;

	x = negative = sign = number = final = 0;
	while (!(s[x] >= 48 && s[x] <= 57))
	{
		if (s[x] == '-')
			negative++;
		x++;
	}
	if (negative % 2 != 0)
		sign = -1;
	hold = x;
	counter = 1;
	while (s[x] >= 48 && s[x] <= 57)
	{
		counter *= 10;
		x++;
	}
	counter /= 10;
	while (s[hold] >= 48 && s[hold] <= 57)
	{
		number = (s[hold] - '0') * counter;
		final = final + number;
		counter /= 10;
		hold ++;
	}
	if (sign < 0)
		final = final * -1;
	return (final);
}
