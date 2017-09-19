#include "holberton.h"

/**
  *  print_alphabet_x10 - prints the alphabet ten times
  */

void print_alphabet_x10(void)
{
	int letter;
	int counter = '0';

	while (counter <= '9')
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	counter++;
	_putchar('\n');
	}
}
