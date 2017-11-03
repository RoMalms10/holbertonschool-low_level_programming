#include "holberton.h"

/**
  * print_binary - prints a number in binary
  * @n: the number to print in decimal
  * Return: nothing, void
  */
void print_binary(unsigned long int n)
{
	unsigned long int check;
	unsigned long int bit_compare;
	int x;

	check = n;
	x = 0;
	bit_compare = 1;
	while (check != 0)/*tried 1, but then if check = 0, would be infinite*/
	{
		check = check >> 1;
		x++;
	}
	x = x == 0 ? 0 : x - 1;
	bit_compare = bit_compare << x;
	while (bit_compare != 0)
	{
		if ((n & bit_compare) != 0)
			_putchar('1');
		else
			_putchar('0');
		bit_compare = bit_compare >> 1;
	}
}
