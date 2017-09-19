#include "holberton.h"

/**
  * jack_bauer - prints all minutes and horus of the day
  *
  * Return: void
  */

void jack_bauer(void)
{
	int first, second, third, fourth;

	first = '0';
	while (first <= '2')
	{
		second = '0';
		while (second <= '9')
		{
			third = '0';
			while (third < '6')
			{
				fourth = '0';
				while (fourth <= '9')
				{
					_putchar(first);
					_putchar(second);
					_putchar(':');
					_putchar(third);
					_putchar(fourth);
					_putchar('\n');
					fourth++;
				}
				third++;
			}
			if (first == '2' && second == '3')
				break;
			second++;
		}
		first++;
	}
}
