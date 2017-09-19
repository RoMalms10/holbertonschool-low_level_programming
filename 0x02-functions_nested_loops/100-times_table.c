#include "holberton.h"

void format_times_table(int j, int k);

/**
  * print_times_table - does the arithmetic for the table and passes it
  * @n: The number that gets passed to size the table
  * Return: void
  */

void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				format_times_table(j, k);
			}
			_putchar('\n');
		}
	}
}

/**
  * format_times_table - Uses if statements to format times table
  * @j: the number from the for loop which checks for the first statement
  * @k: the value of the multiplication
  * Return: void
  */

void format_times_table(int j, int k)
{
	int l, m, o;

	l = k / 100;
	m = (k / 10) % 10;
	o = k % 10;

	if (j == 0)
	{
		_putchar(k + '0');
	}
	else if (k > 9 && k < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(m + '0');
		_putchar(o + '0');
	}
	else if (k >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(l + '0');
		_putchar(m + '0');
		_putchar(o + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
}
