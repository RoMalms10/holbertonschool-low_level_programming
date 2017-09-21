#include "holberton.h"

/**
  * more_numbers - prints numbers 0-14 ten times
  * Return: Nothing, void
  */

void more_numbers(void)
{
	int i, j, single, doubl;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			single = j % 10;
			if (j > 9)
			{
				doubl = j / 10;
				_putchar(doubl + '0');
			}
			_putchar(single + '0');
		}
		_putchar('\n');
	}
}
