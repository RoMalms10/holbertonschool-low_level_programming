#include "holberton.h"

/**
  * print_number - 
  * @num: the number being passed to the function
  * Return: nothing, void. Stops the function if num is 0
  */

void print_number(int num)
{
	int x; /*Used to find how many 0's and then used to divide*/
	unsigned int n; /*Used to hold very large numbers, is passed num*/

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
	x = 10;
	while ((n / x) > 9)
		x *= 10;
	while (x >= 1)
	{
		_putchar((n / x) % 10 + '0');
		x /= 10;
	}
}
