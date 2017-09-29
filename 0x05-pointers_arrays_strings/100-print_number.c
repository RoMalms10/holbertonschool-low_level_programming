#include "holberton.h"

/**
  * print_number - prints numbers using only _putchar
  * @num: The integer to print
  * Return: nothing, void
  */

void print_number(int num)
{
	int x;
	unsigned int n;

	if (num < 0)
	{
		n = num * -1;
		_putchar('-');
	}
	else if (num == 0)
	{
		_putchar(num + '0');
		return;
	}
	else
	{
		n = num;
	}
	x = 1;
	while ((n / x) > 9)
		x *= 10;
	while (x >= 1)
	{
		_putchar(((n / x) % 10) + '0');
		x /= 10;
	}
}
