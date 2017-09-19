#include "holberton.h"

/**
  *
  *
  */

void print_alphabet(void)
{
	int letter = 'a';
	
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
