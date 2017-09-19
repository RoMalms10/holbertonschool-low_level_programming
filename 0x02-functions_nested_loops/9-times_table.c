#include "holberton.h"

/**
  * times_table - create a multiplication table
  *
  * Return: void
  */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			else if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				l = k / 10;
				m = k % 10;
				_putchar(l + '0');
				_putchar(m + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar ('\n');
	}
}
