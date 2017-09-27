#include "holberton.h"

/**
  * _atoi - Takes a string and converts the numbers into integers
  * @s: The string to be checked
  * Return: Nothing, void
  */

int _atoi(char *s)
{
	int x, sign;
	unsigned int number;

	x = number = 0;
	sign = 1;
	while ((!(s[x] >= 48 && s[x] <= 57)) && s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;
		x++;
	}
	if (s[x] == '\0')
		return (number);
	while ((s[x] >= 48 && s[x] <= 57) && s[x] != '\0') /*While it IS a number*/
	{
		number = number * 10 + (s[x] - '0');
		x++;
	}
	return (number * sign);
}
